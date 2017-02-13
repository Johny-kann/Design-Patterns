#include <iostream>
#include "Interface.h"

using namespace std;

int main(int argc, char *argv[])
{
    CarBuilderDirector director;
    Car car = director.getPassenger("RED");

    Car car2 = director.getSportsCar("YELLOW");

    std::cout<<car.mode<<car.wheels;

    std::cout<<'\n'<<car2.mode<<car2.wheels;

      return 0;
}
