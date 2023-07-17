#include "ElectricCar.h"
#include <ElectricEngine.h>
//#include <memory>
ElectricCar::ElectricCar() : 
	Car(std::make_unique<ElectricEngine>())
{
}

void ElectricCar::drive()
{
}
