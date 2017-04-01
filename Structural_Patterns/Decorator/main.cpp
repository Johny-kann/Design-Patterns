#include "headers.h"
#include <iostream>

void print(Coffee &coffee)
{
    std::cout<<coffee.getCost()<<'\t'<<coffee.getIngredients()<<'\n';
}



int main(int argv, char *argc[])
{
    Coffee *coffee = new SimpleCoffee();

    Coffee *decorator1 = new WithMilk(*coffee);

    Coffee *decorator2 = new WithSprinkles(*decorator1);

    Coffee *decorator3 = new WithSprinkles(*decorator2);

    print(*coffee);
    print(*decorator1);
    print(*decorator2);
    print(*decorator3);


    return 0;
}
