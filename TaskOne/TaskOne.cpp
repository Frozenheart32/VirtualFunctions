#include <iostream>

#include "../MyClassLibrary/Bicycle.h"
#include "../MyClassLibrary/Car.h"

int main(int argc, char* argv[])
{
    Car c(Engine(150), Wheel(17), Wheel(17), Wheel(18), Wheel(18), 150);
    std::cout << c << '\n';



    Bicycle t(Wheel(20), Wheel(20), 300);

    std::cout << t << '\n';
    return 0;
}
