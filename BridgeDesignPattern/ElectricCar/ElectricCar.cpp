#include "ElectricCar.h"
#include <ElectricEngine.h>
//#include <memory>
ElectricCar::ElectricCar() : engine_(std::make_unique<ElectricEngine>())
{
}
