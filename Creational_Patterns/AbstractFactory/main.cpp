#include <iostream>
#include "interfaces.h"

using namespace std;

int main(int argc, char *argv[])
{

    Factory factory;

    uref<IShape> rectangle = factory.getShape("Rectangle");

    uref<IShape> square = factory.getShape("Square");

    uref<IColor> red = factory.getColor("Red");

    uref<IColor> blue = factory.getColor("Blue");


    square->shape();

    rectangle->shape();

    return 0;
}
