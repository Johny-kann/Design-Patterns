#ifndef COMPOSITE_H
#define COMPOSITE_H
#include <vector>
#include <memory>


class IGraphic
{
public:
    virtual void draw() = 0;
};


class CompositeGraphics : public IGraphic
{
public:
    void draw() override;
    void add(IGraphic *graphics);
    void remove(IGraphic *graphics);

private:
    std::vector<std::unique_ptr<IGraphic>>  graphics;
};


class Ellipse : public IGraphic
{
public:
    void draw() override;
};

#endif

