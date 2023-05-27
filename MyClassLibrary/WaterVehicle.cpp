#include "WaterVehicle.h"

WaterVehicle::WaterVehicle(float draft)
{
    this->draft = draft;
}

std::ostream& WaterVehicle::print(std::ostream& out) const
{
    out << "WaterVehicle. Draft level: " << draft << std::endl;
    return out;
}
