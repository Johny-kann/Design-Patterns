#ifndef HEADER_H
#define HEADER_H

class DrawAPI
{
public:
    virtual void drawCircle(int radius, int x, int y) = 0;
};

class RedCircle : public DrawAPI
{
public:
    void drawCircle(int radius, int x, int y) override;
};

class GreenCircle : public DrawAPI
{
public:
    void drawCircle(int radius, int x, int y) override;
};


class Shape
{
public:
    Shape(DrawAPI *api) : drawAPI(api){ }

    virtual void draw() = 0;


protected:
    DrawAPI   *drawAPI;
};


class Circle : public Shape
{
public:
    Circle(int x, int y, int radius, DrawAPI *api) : x(x), y(y), radius(radius), Shape(api) {  }
    void draw() override;

private:
    int x, y, radius;
};



#endif

