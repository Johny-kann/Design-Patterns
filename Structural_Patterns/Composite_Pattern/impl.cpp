#include "header.h"
#include <iostream>

void CompositeGraphics::draw()
{
    for(int i = 0; i < graphics.size(); i++)
    {
        graphics[i]->draw();
    }
}

void CompositeGraphics::add(IGraphic *graphics)
{
    this->graphics.push_back( std::unique_ptr<IGraphic>(graphics));
}

void CompositeGraphics::remove(IGraphic *graphics)
{
    //
}

void Ellipse::draw()
{
    std::cout<<"Ellipse";
}
