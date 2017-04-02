#include "game.h"
#include <iostream>

void print(Enemy &enemy)
{
    std::cout<<"\nEnemy "<<enemy.getPoints()<<" at "<<enemy.x<<","<<enemy.y;
}

int main(int argv, char *argc[])
{

    Enemy enemy1 = EnemyFactory::getEnemy("human");
    Enemy enemy2= EnemyFactory::getEnemy("human");
    Enemy enemy3 = EnemyFactory::getEnemy("human");

    Enemy enemy4 = EnemyFactory::getEnemy("Robot");

    Enemy enemy5 = EnemyFactory::getEnemy("Robot");

    enemy1.x = 100;
    enemy1.x = 20;

    enemy2.x = 1000;
    enemy2.y = 200;

    enemy3.x = 150;
    enemy3.y = 250;

    enemy4.x = 10;
    enemy4.y = 20;

    enemy5.x = 12;
    enemy5.y = 24;


    print(enemy1);
    print(enemy2);
    print(enemy3);

    print(enemy4);
    print(enemy5);

    return 0;
}
