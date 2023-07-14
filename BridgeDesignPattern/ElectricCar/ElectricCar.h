#pragma once

#include <Engine.h>
#include <memory>

class ElectricCar
{
public:
	ElectricCar();
	void drive();
private:
	std::unique_ptr<Engine> engine_;
};

