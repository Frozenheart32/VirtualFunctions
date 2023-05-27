#include "Engine.h"

Engine::Engine()
{
    
}

Engine::Engine(float power)
{
    this->power = power;
}

float Engine::get_engine_power() const
{
    return power;
}

Engine& Engine::operator==(Engine& OtherWheel)
{
    power = OtherWheel.get_engine_power();
    return (*this);
}
