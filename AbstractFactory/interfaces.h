#ifndef INTERFACES_H
#define INTERFACES_H

#include <string>
#include <memory>

#define uref  std::unique_ptr



class IShape
{

public:
    virtual void shape() = 0;

};


class IColor
{
public:
    virtual void color() = 0;

};


class Factory
{
public:
   uref<IShape> getShape(std::string shape);
   uref<IColor> getColor(std::string color);
};

#endif // INTERFACES_H

