#pragma once

#include <Engine.h>
#include <memory>
#include <Car.h>

class ElectricCar : public Car
{
public:
	explicit ElectricCar();
	void drive() override;
private:
};

