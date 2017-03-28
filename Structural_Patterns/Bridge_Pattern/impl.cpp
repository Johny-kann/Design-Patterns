
#include "header.h"
#include <iostream>

void Circle::draw()
{
    drawAPI->drawCircle(radius, x, y);
}

void GreenCircle::drawCircle(int radius, int x, int y)
{
    std::cout<<" Green Circle "<<"Radius "<<radius<<" Point "<<x<<','<<y;
}

void RedCircle::drawCircle(int radius, int x, int y)
{
    std::cout<<" Red Circle "<<"Radius "<<radius<<" Point "<<x<<','<<y;
}
