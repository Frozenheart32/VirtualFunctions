#pragma once
#include "Engine.h"
#include "RoadVehicle.h"
#include "Wheel.h"

class Car : public RoadVehicle
{
    
public:

    Car(Engine engine, Wheel left_forward_wheel, Wheel right_forward_wheel,
        Wheel left_backward_wheel, Wheel right_backward_wheel, float ride_height);

protected:

    Engine engine;
    Wheel leftForwardWheel;
    Wheel rightForwardWheel;
    Wheel leftBackwardWheel;
    Wheel rightBackwardWheel;
    
public:

    virtual std::ostream& print(std::ostream& out) const override;
    float get_car_power() const;
};
