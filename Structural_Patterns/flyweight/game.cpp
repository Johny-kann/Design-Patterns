#include "game.h"
#include <iostream>
#include <vector>

std::map<std::string, std::unique_ptr<EnemyModel>>  EnemyFactory::_cache;


Enemy EnemyFactory::getEnemy(const std::__cxx11::string &model)
{
    if(_cache.find(model) != _cache.end())
    {
        EnemyModel &points = *_cache[model];
        return Enemy(points);
    }else
    {
        std::string str = model;

        _cache.emplace(model, std::make_unique<EnemyModel>(model));

        std::cout<<"\nCreating a Model "<<model;

        EnemyModel &points = *_cache[model];
        return Enemy(points);
    }


}
