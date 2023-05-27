#pragma once
#include "Vehicle.h"

class RoadVehicle : public Vehicle
{

public:
    
    RoadVehicle(float ride_height);

protected:

    float rideHeight = 0.f;
    
public:
    
    virtual std::ostream& print(std::ostream& out) const override;
};
