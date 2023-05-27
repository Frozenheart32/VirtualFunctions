#include "Wheel.h"

Wheel::Wheel()
{
}

Wheel::Wheel(float diameter)
{
    this->diameter = diameter;
}

float Wheel::get_wheel_diameter() const
{
    return diameter;
}

Wheel& Wheel::operator==(Wheel& OtherWheel)
{
    diameter = OtherWheel.get_wheel_diameter();
    return (*this);
}
