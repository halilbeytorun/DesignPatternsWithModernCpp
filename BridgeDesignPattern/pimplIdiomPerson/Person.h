#pragma once
#include<memory>
class Person
{
public:
	// ...
	Person();
	~Person();
	Person(Person const& other);
	Person& operator=(Person const& other);
	Person(Person&& other);
	Person& operator=(Person&& other);
	int year_of_birth() const;
	// ... Many more access functions
private:
	struct Impl;
	std::unique_ptr<Impl> const pimpl_;
};