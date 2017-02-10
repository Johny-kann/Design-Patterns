#include "header.h"
#include <iostream>

std::unique_ptr<IShape> Rectangle::clone()
{
    return std::make_unique<Rectangle>();
}

void Rectangle::draw()
{
    std::cout<<"Rectangle";
}


std::unique_ptr<IShape> Square::clone()
{
    return std::make_unique<Square>();
}

void Square::draw()
{
std::cout<<"Square";
}




std::unique_ptr<IShape> Circle::clone()
{
    return std::make_unique<Circle>();
}

void Circle::draw()
{
    std::cout<<"Circle";
}


std::unique_ptr<IShape> ShapeFactory::getShape(int index)
{
    return vec_Shapes[index]->clone();
}

std::vector<std::unique_ptr<IShape>> ShapeFactory::vec_Shapes ={};

void ShapeFactory::loadFactory()
{
    vec_Shapes.push_back(std::make_unique<Circle>());
    vec_Shapes.push_back(std::make_unique<Rectangle>());
    vec_Shapes.push_back(std::make_unique<Square>());

}
