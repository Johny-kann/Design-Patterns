#ifndef HEADER_H
#define HEADER_H

#include <memory>
#include <vector>

class ExpensiveObject
{

};


class ObjectPool
{
public:
    bool getObject(std::unique_ptr<ExpensiveObject> &object);

private:
    std::vector<ExpensiveObject*> vecs;
    int count = 5;

};

#endif // HEADER_H
