#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    int length;
    int width;
public:
    Rectangle();
    Rectangle(int length, int width);
    ~Rectangle();
    void setLength(int length);
    void setWidth(int width);
    int getLength()const;
    int getWidth()const;
    int area();
};

#endif