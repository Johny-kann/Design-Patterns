#ifndef GAME_H
#define GAME_H

#include <string>
#include <map>
#include <memory>

/*
 * Expensive Class that contains the polygons of the character
 *
 * */
class EnemyModel
{
public:
    EnemyModel(const std::string &points):_points(points){}
    inline std::string &getPoints(){ return _points; }


private:
    std::string  _points;
};


/*
 * Flyweight wrapper
 *
 * */
class Enemy
{
public:
    Enemy(EnemyModel &model):_model(model){ }
    inline std::string &getPoints(){ return _model.getPoints(); }

    int x, y;

private:

    EnemyModel&  _model;
};


class EnemyFactory
{
public:
    static Enemy   getEnemy(const std::string &model);


private:
    static std::map<std::string, std::unique_ptr<EnemyModel>>  _cache;


};

#endif
