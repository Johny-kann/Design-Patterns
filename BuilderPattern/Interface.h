#ifndef INTERFACE_H
#define INTERFACE_H

#include <string>
#include <memory>

class Car
{
public:
    int wheels;
    std::string color;
    std::string mode;
};


class ICarBuilder
{
protected:
    Car car;

public:
   virtual void setWheels(int i) = 0;
   virtual void setColor(std::string color) = 0;

   Car getCar();
};


class CarBuilderDirector
{
public:
    Car getSportsCar(std::string color);
    Car getPassenger(std::string color);
    Car getSUV(std::string color);

private:
    std::unique_ptr<ICarBuilder> builder;
};



#endif


