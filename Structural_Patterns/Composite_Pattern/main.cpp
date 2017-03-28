#include "header.h"

int main(int argv, char *argc[])
{
    Ellipse  *ellipse1 = new Ellipse();
    Ellipse  *ellipse2 = new Ellipse();
    Ellipse  *ellipse3 = new Ellipse();


    CompositeGraphics *graphics = new CompositeGraphics();

    graphics->add(ellipse1);
    graphics->add(ellipse2);
    graphics->add(ellipse3);

    Ellipse  *ellipse4 = new Ellipse();
    Ellipse  *ellipse5 = new Ellipse();


    CompositeGraphics *graphics2 = new CompositeGraphics();

    graphics2->add(ellipse4);
    graphics2->add(ellipse5);

    CompositeGraphics *graphics3 = new CompositeGraphics();

    graphics3->add(graphics);
    graphics3->add(graphics2);

    graphics3->draw();

    return 0;
}
