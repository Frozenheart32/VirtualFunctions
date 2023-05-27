#pragma once

class Wheel
{
    
public:
    Wheel();
    Wheel(float diameter);
    
private:
    
    float diameter = 0.f;

public:
    
    float get_wheel_diameter() const;

    Wheel& operator==(Wheel& OtherWheel);
};
