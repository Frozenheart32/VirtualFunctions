#include "Bicycle.h"

Bicycle::Bicycle(Wheel forward, Wheel backward, float ride_height) : RoadVehicle(ride_height)
{
    forwardWheel = forward;
    backwardWheel = backward;
}

std::ostream& Bicycle::print(std::ostream& out) const
{
    out << "Bicycle "
    <<"Wheels: " << forwardWheel.get_wheel_diameter() << " " << backwardWheel.get_wheel_diameter()
    << " Ride height = " << rideHeight
    << std::endl;
    return out;
}
