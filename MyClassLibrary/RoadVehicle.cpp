#include "RoadVehicle.h"

RoadVehicle::RoadVehicle(float ride_height) : Vehicle()
{
    this->rideHeight = ride_height;
}

std::ostream& RoadVehicle::print(std::ostream& out) const
{
    out << "Road Vehicle. Ride Height: " << rideHeight << std::endl;
    return out;
}
