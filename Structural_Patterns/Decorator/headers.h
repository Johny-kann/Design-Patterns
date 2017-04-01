#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <string>

class  Coffee
{
public:
    virtual double getCost() = 0;
    virtual std::string getIngredients() = 0;
};


class SimpleCoffee : public Coffee
{
public:
    double      getCost() override;
    std::string getIngredients() override;
};


class ICoffeeDecorator : public Coffee
{
public:
    ICoffeeDecorator(Coffee &coffee);

    virtual double  getCost() override;
    virtual std::string  getIngredients()  override;

protected:
    Coffee&  decoratedCoffee;
};

class  WithMilk : public ICoffeeDecorator
{
public:
    WithMilk(Coffee &coffee);
    double getCost() override;
    std::string  getIngredients() override;

};

class WithSprinkles : public ICoffeeDecorator
{
public:
    WithSprinkles(Coffee &coffee);
    double getCost() override;
    std::string  getIngredients() override;

};

#endif // HEADERS_H

