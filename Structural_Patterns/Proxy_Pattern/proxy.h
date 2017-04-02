#ifndef PROXY_H
#define PRXOY_H

#include <iostream>

class ICar
{
public:
    virtual void driveCar() = 0;
};


class Car : public ICar
{
public:
    void driveCar() override
    {
        std::cout<<"Car is being driven";
    }
};

class ProxyCar : public ICar
{
public:
    ProxyCar(int driverAge):_driver_age(driverAge){}


    void driveCar() override
    {
        if(_driver_age < 18)
        {
            std::cout<<"Driver should be atleast 18";
        }else
        {
            realcar->driveCar();
        }
    }


private:
    ICar *realcar = new Car();
    int _driver_age;
};

#endif
