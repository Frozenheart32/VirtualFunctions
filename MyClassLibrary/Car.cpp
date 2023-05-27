#include "Car.h"

Car::Car(Engine engine, Wheel left_forward_wheel, Wheel right_forward_wheel, Wheel left_backward_wheel,
    Wheel right_backward_wheel, float ride_height) : RoadVehicle(ride_height)
{
    this->engine = engine;
    leftForwardWheel = left_forward_wheel;
    rightForwardWheel = right_forward_wheel;
    leftBackwardWheel = left_backward_wheel;
    rightBackwardWheel = right_backward_wheel;
}

std::ostream& Car::print(std::ostream& out) const
{
    out << "Car Engine:" << get_car_power()
    <<" Wheels: " << leftForwardWheel.get_wheel_diameter() << " " << rightForwardWheel.get_wheel_diameter() << " " << leftBackwardWheel.get_wheel_diameter() << " " << rightBackwardWheel.get_wheel_diameter()
    << " Ride height = " << rideHeight
    << std::endl;
    return out;
}

float Car::get_car_power() const
{
    return engine.get_engine_power();
}
