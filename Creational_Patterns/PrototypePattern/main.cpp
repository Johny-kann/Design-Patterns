#include <iostream>
#include "interface.h"

using namespace std;

int main(int argc, char *argv[])
{

    ShapeFactory::loadFactory();


    std::unique_ptr<IShape> shape = ShapeFactory::getShape(0);
    std::unique_ptr<IShape> shape2 = ShapeFactory::getShape(1);
    std::unique_ptr<IShape> shape3 = ShapeFactory::getShape(2);

    shape->draw();
    shape2->draw();
    shape3->draw();

    std::unique_ptr<IShape> newShape = shape->clone();

    newShape->draw();

    return 0;
}
