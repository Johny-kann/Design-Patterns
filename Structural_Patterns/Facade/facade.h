#ifndef FACADE_H
#define FACADE_H

class CarModel
{
public:
    void setModel();
};


class CarEngine
{
public:
    void setEngine();
};

class CarBody
{
public:
    void setBody();

};

class CarAccessories
{
public:
    void setAccessories();
};


class CarFactory
{
public:
    void createCompleteCar();

private:
    CarAccessories _accessories;
    CarEngine       _engine;
    CarBody         _body;
    CarModel        _model;

};

#endif

