#include "headers.h"

double SimpleCoffee::getCost()
{
    return 10;
}


std::__cxx11::string SimpleCoffee::getIngredients()
{
    return "Simple Coffee ";
}

ICoffeeDecorator::ICoffeeDecorator(Coffee &coffee):decoratedCoffee(coffee)
{

}

double ICoffeeDecorator::getCost()
{
    return decoratedCoffee.getCost();
}

std::__cxx11::string ICoffeeDecorator::getIngredients()
{
    return decoratedCoffee.getIngredients();
}

WithMilk::WithMilk(Coffee &coffee):ICoffeeDecorator(coffee)
{

}

double WithMilk::getCost()
{
    return ICoffeeDecorator::getCost() + 2;
}

std::__cxx11::string WithMilk::getIngredients()
{
    return ICoffeeDecorator::getIngredients() + " Milk ";
}

WithSprinkles::WithSprinkles(Coffee &coffee):ICoffeeDecorator(coffee)
{

}

double WithSprinkles::getCost()
{
    return ICoffeeDecorator::getCost() + 4;
}

std::__cxx11::string WithSprinkles::getIngredients()
{
    return ICoffeeDecorator::getIngredients() + " Sprinkles ";
}
