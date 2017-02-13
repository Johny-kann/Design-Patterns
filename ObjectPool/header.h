#ifndef HEADER_H
#define HEADER_H

#include <memory>
#include <vector>
#include <functional>
#include <stack>


/*
 *
 * Just a Sample. Flawless implementation pending
 *
 * */

class ExpensiveObject;

using uref = std::unique_ptr<ExpensiveObject,std::function<void(ExpensiveObject*)>>;

class ExpensiveObject
{
public:
    ExpensiveObject(int i): num(i){}


    int num;
};


class ObjectPool
{
public:
    ObjectPool(int max);
    bool getObject(uref &object);

    void release(ExpensiveObject *obj);

private:
    std::vector<ExpensiveObject> vecs;
    std::stack<ExpensiveObject*> free_ids;
    int Max;

};

#endif // HEADER_H

