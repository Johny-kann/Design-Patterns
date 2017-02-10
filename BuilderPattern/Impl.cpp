#include "Headers.h"

Car CarBuilderDirector::getSportsCar(std::__cxx11::string color)
{
    builder = std::make_unique<SportCarBuilder>();
    builder->setWheels(4);
    builder->setColor(color);

    return builder->getCar();
}

Car CarBuilderDirector::getPassenger(std::__cxx11::string color)
{
    builder = std::make_unique<PassengerCarBuilder>();
    builder->setWheels(4);
    builder->setColor(color);

    return builder->getCar();
}

Car CarBuilderDirector::getSUV(std::__cxx11::string color)
{
    builder = std::make_unique<SUVCarBuilder>();
    builder->setWheels(6);
    builder->setColor(color);

    return builder->getCar();
}


Car ICarBuilder::getCar()
{
    return car;
}


SportCarBuilder::SportCarBuilder()
{
    car.mode = "Sport";
}

void SportCarBuilder::setWheels(int i)
{
    car.wheels = i;
}

void SportCarBuilder::setColor(std::__cxx11::string color)
{
    car.color = color;
}


SUVCarBuilder::SUVCarBuilder()
{
    car.mode = "SUV";
}

void SUVCarBuilder::setWheels(int i)
{
    car.wheels = i;
}

void SUVCarBuilder::setColor(std::__cxx11::string color)
{
    car.color = color;
}

PassengerCarBuilder::PassengerCarBuilder()
{
    car.mode = "Passenger";
}

void PassengerCarBuilder::setWheels(int i)
{
    car.wheels = i;
}

void PassengerCarBuilder::setColor(std::__cxx11::string color)
{
    car.color = color;
}
