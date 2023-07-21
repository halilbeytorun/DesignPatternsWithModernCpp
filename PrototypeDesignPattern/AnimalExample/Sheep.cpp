#pragma once
#include<iostream>
#include "Sheep.h"


void Sheep::makeSound() const
{
	std::cout << "Mee\n";
}

std::unique_ptr<Animal> Sheep::clone() const
{
	return std::make_unique<Sheep>(*this);
}

