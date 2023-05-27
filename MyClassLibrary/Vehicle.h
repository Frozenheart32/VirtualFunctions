#pragma once
#include <ostream>

class Vehicle
{

public:

    Vehicle();
    virtual ~Vehicle();

    virtual std::ostream& print(std::ostream& out) const = 0;

    friend std::ostream& operator<< (std::ostream& out, const Vehicle& vehicle)
    {
        return vehicle.print(out);
    }
};
