#include "facade.h"
#include <iostream>

void CarModel::setModel()
{
    std::cout<<" Model Set ";
}

void CarEngine::setEngine()
{
    std::cout<<" Engine Set ";
}

void CarAccessories::setAccessories()
{
    std::cout<<" Accessories Set ";
}

void CarFactory::createCompleteCar()
{
    _model.setModel();
    _engine.setEngine();
    _body.setBody();
    _accessories.setAccessories();

}

void CarBody::setBody()
{
    std::cout<<" Body Set ";
}
