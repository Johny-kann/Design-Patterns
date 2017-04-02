#include "command.h"
#include <iostream>

FlipUpCommand::FlipUpCommand(Light *light)
{
    _light = light;
}

FlipDownCommand::FlipDownCommand(Light *light)
{
    _light = light;
}

void FlipUpCommand::execute()
{
    _light->turnON();
}


void FlipDownCommand::execute()
{
    _light->turnOFF();
}



void Light::turnON()
{
    std::cout<<"Light Turned ON";
}

void Light::turnOFF()
{
    std::cout<<"Light Turned OFF";
}
