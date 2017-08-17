#ifndef ITER_H
#define ITER_H

#include <string>
#include <vector>

class NamedRepository;

class Iterator
{


public:
    Iterator(NamedRepository *it):repository(it),index(0){}
    bool hasNext();
    std::string  next();

private:
    int index;
    NamedRepository *repository;
};


class Container
{
public:
    virtual Iterator getIterator() = 0;
};


class NamedRepository : public Container
{
public:
    Iterator getIterator();
    friend class Iterator;

private:
    std::vector<std::string> names = {"Muthu","Narayanan","Palani","Thirupathi"};


    // Container interface
public:

};



#endif
