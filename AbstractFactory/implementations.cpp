#include "interfaces.h"
#include "headers.h"
#include <iostream>

using namespace std;

uref<IShape> Factory::getShape(std::__cxx11::string shape)
{
    if(shape.compare("Rectangle")==0)
    {
        return make_unique<Rectangle>();
    }
    else if(shape.compare("Circle")==0)
    {
        return make_unique<Circle>();

    }else if(shape.compare("Square")==0)
    {
        return make_unique<Square>();
    }
    else
    {
        return make_unique<Circle>();
    }
}

uref<IColor> Factory::getColor(std::__cxx11::string color)
{

    if(color.compare("Red")==0)
    {
        return make_unique<Red>();
    }
    else if(color.compare("Yellow") == 0)
    {
        return make_unique<Yellow>();
    }
    else if(color.compare("Blue") == 0)
    {
        return make_unique<Blue>();
    }else
    {
        return make_unique<Red>();
    }
}



void Rectangle::shape()
{
    std::cout<<"Rectangle";
}

void Square::shape()
{
    std::cout<<"Square";
}

void Circle::shape()
{
    std::cout<<"Circle";
}

void Red::color()
{
    std::cout<<"Red";
}

void Yellow::color()
{
    std::cout<<"Yellow";
}

void Blue::color()
{
    std::cout<<"Blue";
}
