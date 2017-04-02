#include "command.h"


int main()
{
    Light light;

    FlipUpCommand upcommand(&light);
    FlipDownCommand downCommand(&light);

    Switch switcher(upcommand, downCommand);


    switcher.turnON();
    switcher.turnOFF();

    return 0;
}
