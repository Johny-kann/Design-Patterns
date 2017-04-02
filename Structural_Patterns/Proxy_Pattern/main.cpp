#include "proxy.h"


int main()
{
    ICar *car = new ProxyCar(16);
    car->driveCar();

    ICar *car2 = new ProxyCar(20);
    car2->driveCar();

    delete car;
    delete car2;

    return 0;
}
