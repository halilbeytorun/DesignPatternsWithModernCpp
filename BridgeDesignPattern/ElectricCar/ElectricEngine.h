#pragma once
#include <Engine.h>
class ElectricEngine :
    public Engine
{
public:
    void start() override;
    void stop() override;
private:

};

