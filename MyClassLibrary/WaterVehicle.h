#pragma once
#include "Vehicle.h"

class WaterVehicle : public Vehicle
{
public:
    
    WaterVehicle(float draft);

protected:

    float draft = 0.f;
    
public:
    
    virtual std::ostream& print(std::ostream& out) const override;
};
