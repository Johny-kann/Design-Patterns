#ifndef HEADERS_H
#define HEADERS_H

#include "Interface.h"

class SportCarBuilder:public ICarBuilder
{
public:
    SportCarBuilder();
    virtual void setWheels(int i) override;
    virtual void setColor(std::string color) override;
};

class SUVCarBuilder:public ICarBuilder
{
public:
    SUVCarBuilder();
    virtual void setWheels(int i) override;
    virtual void setColor(std::string color) override;
};

class PassengerCarBuilder:public ICarBuilder
{
public:
    PassengerCarBuilder();
    virtual void setWheels(int i) override;
    virtual void setColor(std::string color) override;
};


#endif



