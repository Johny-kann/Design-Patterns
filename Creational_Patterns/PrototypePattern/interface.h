#ifndef INTERFACE_H
#define INTERFACE_H
#include <memory>
#include <vector>


class IShape
{
public:
    virtual std::unique_ptr<IShape>  clone() = 0;
    virtual void draw() = 0;
};


class ShapeFactory
{
public:

    static std::unique_ptr<IShape> getShape(int index);
    static void loadFactory();

private:
    static std::vector<std::unique_ptr<IShape>>  vec_Shapes;
};


#endif // INTERFACE_H

