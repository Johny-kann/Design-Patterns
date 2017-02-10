#ifndef HEADER_H
#define HEADER_H

#include "interface.h"

class Rectangle : public IShape
{
public:
    virtual std::unique_ptr<IShape> clone() override;
    virtual void draw() override;
};

class Square : public IShape
{
public:
    virtual std::unique_ptr<IShape> clone() override;
    virtual void draw() override;
};

class Circle : public IShape
{
public:
    virtual std::unique_ptr<IShape> clone() override;
    virtual void draw() override;
};

#endif // HEADER_H

