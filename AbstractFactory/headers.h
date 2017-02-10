#ifndef HEADERS_H
#define HEADERS_H

#include "interfaces.h"

class Rectangle : public IShape
{
public:
    void shape();
};


class Square : public IShape
{
public:
    void shape();
};

class Circle : public IShape
{
public:
    void shape();
};





class Red : public IColor
{
public:
    void color();
};


class Yellow : public IColor
{
public:
    void color();
};


class Blue : public IColor
{
public:
    void color();
};


#endif // HEADERS_H




