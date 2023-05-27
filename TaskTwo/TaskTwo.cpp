#include <iostream>

#include <vector>

#include "../MyClassLibrary/Bicycle.h"
#include "../MyClassLibrary/Car.h"
#include "../MyClassLibrary/WaterVehicle.h"

float getHighestPower(const std::vector<Vehicle*>& vehicles)
{
    float maxPower = 0.f;

    for (const auto vehicle : vehicles)
    {
        const auto currentCar = dynamic_cast<Car*>(vehicle);
        if(currentCar)
        {
            auto power = currentCar->get_car_power();
            if(power > maxPower)
            {
                maxPower = power;
            }
        }
    } 
    
    return maxPower;
}

int main()

{

    std::vector<Vehicle*> v;

    v.push_back(new Car(Engine(150), Wheel(17), Wheel(17), Wheel(18), Wheel(18), 250));
    //v.push_back(new Circle(Point(1, 2, 3), 7));  - class Circle - class missing
    v.push_back(new Bicycle(Wheel(50), Wheel(50), 150));
    v.push_back(new Car(Engine(200), Wheel(19), Wheel(19), Wheel(19), Wheel(19), 130));
    v.push_back(new WaterVehicle(5000));


    for (const auto vehicle : v)
    {
        vehicle->print(std::cout);
    } 

    std::cout << "The highest power is " << getHighestPower(v) << '\n';


    for (auto vehicle : v)
    {
        delete vehicle;
        vehicle = nullptr;
    } 
}
