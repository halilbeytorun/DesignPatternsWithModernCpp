#include <iostream>
#include <vector>

struct Person
{
	enum class GenderT{Male, Female};
	std::string name{};
	GenderT gender{};
	int weight;
};

template<typename T>
struct specification
{
	virtual bool is_satisfied(const T& item) = 0;
	virtual ~specification() = default;
};

template<typename T>
struct Filter
{
	virtual std::vector<T*> filter(std::vector<T*>& items, specification<T>& spec) = 0;
	virtual ~Filter() = default;
};

struct PersonFilter : public Filter<Person>
{
	std::vector<Person*> filter(std::vector<Person*>& people, specification<Person>& spec) override
	{
		std::vector<Person*> result{};
		for(auto person : people)
		{
			if(spec.is_satisfied(*person))
				result.push_back(person);
		}
		return result;
	}
};

struct genderSpecification : public specification<Person>
{
	genderSpecification(Person::GenderT gender) : specification<Person>{}, whichOne{gender} {} 
	bool is_satisfied(const Person& item) override
	{
		return item.gender == whichOne;
	}
	Person::GenderT whichOne{};
};

struct weightSpecification : public specification<Person>
{
	weightSpecification(int weight) : specification<Person>{}, what{weight} {} 
	bool is_satisfied(const Person& item) override
	{
		return item.weight == what;
	}
	int what{};
};


int main()
{
	Person halil{"halil", Person::GenderT::Male, 80};
	Person bocek{"bocek", Person::GenderT::Female, 50};
	Person ibis{"ibis", Person::GenderT::Male, 80};
	Person hakari{"hakari", Person::GenderT::Male, 80};
	
	std::vector<Person*> values{&halil, &bocek, &ibis, &hakari};
	PersonFilter filterThem;
	genderSpecification males{Person::GenderT::Male};
	filterThem.filter(values, males);

	return 0;
}


