#pragma once
#include "RoadVehicle.h"
#include "Wheel.h"

class Bicycle : public RoadVehicle
{
    
public:

    Bicycle(Wheel forward, Wheel backward, float ride_height);

protected:
    
    Wheel forwardWheel;
    Wheel backwardWheel;

public:

    virtual std::ostream& print(std::ostream& out) const override;
};
