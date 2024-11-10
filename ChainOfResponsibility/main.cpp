#include <iostream>
#include <vector>
#include <memory>
#include <stack>
#include <algorithm>

#include <string>
using namespace std;

struct Creature
{
    string name_;
    int attack_, defence_;
    Creature(const string name, const int attack, const int defence) : name_(name), attack_(attack), defence_(defence) {}

    friend ostream& operator<<(ostream& os, const Creature& creature)
    {
        os << "name: " << creature.name_ << " attack: " << creature.attack_ << " defence: " << creature.defence_;
        return os;
    }
};
// Chain of responsiblity design pattern, similar to Decorator but the intent is different.
class CreatureModifier
{
    unique_ptr<CreatureModifier> next{nullptr};
protected:
    Creature& creature_;
public:
    virtual ~CreatureModifier() = default;
    CreatureModifier(Creature& creature) : creature_(creature) {}

    void add(unique_ptr<CreatureModifier>&& cm)
    {
        if(next)
            next->add(move(cm));
        else
            next = move(cm);
    }
    virtual void handle()
    {
        if(next)
            next->handle();
    }
};

class DoubleAttackModifier : public CreatureModifier
{
public:
    DoubleAttackModifier(Creature& creature) : CreatureModifier(creature) {}
    void handle() override
    {
        creature_.attack_ *= 2;
        CreatureModifier::handle(); // chain of responsibility!
    }
};


class IncreaseDefenceModifier : public CreatureModifier
{
public:
    IncreaseDefenceModifier(Creature& creature) : CreatureModifier(creature) {}
    void handle() override
    {
        if(creature_.attack_ <= 2)
            creature_.defence_++;
        CreatureModifier::handle();
    }
};

// builder design pattern
class CreatureModifierBuilder
{
    unique_ptr<CreatureModifier> root;
    Creature& creature_;
public:
    CreatureModifierBuilder(Creature& creature) : root(make_unique<CreatureModifier>(creature)), creature_(creature) 
    {
        int a = 1;
    }
    unique_ptr<CreatureModifier> Build()
    {
        return unique_ptr<CreatureModifier>{move(root)};
    }
    CreatureModifierBuilder& FromIncreaseDefenceModifier()
    {
        root->add(make_unique<IncreaseDefenceModifier>(creature_));
        return *this;
    }
    CreatureModifierBuilder& FromDoubleAttackModifier()
    {
        root->add(make_unique<DoubleAttackModifier>(creature_));
        return *this;
    }
};



int main()
{
    Creature goblin{"goblin", 1,1};
    CreatureModifierBuilder builder(goblin);
    builder.FromDoubleAttackModifier().FromDoubleAttackModifier().FromDoubleAttackModifier();
    auto val = builder.Build();
    val->handle();
    cout << goblin;
}
