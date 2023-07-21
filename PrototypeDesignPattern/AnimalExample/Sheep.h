#pragma once

#include<iostream>
#include <Animal.h>

class Sheep : public Animal
{
public:
	explicit Sheep(std::string name) : name_(name) {}
	void makeSound() const override;
	std::unique_ptr<Animal> clone() const override;


private:
	std::string name_;
};
