#include "header.h"

int main()
{

    Shape *red = new Circle(10, 10 , 30, new RedCircle());
    Shape *green = new Circle(10, 10 , 30, new GreenCircle());


    red->draw();
    green->draw();


    return 0;
}
