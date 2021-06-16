#include <iostream>
#include "Rectangle.h"



Rectangle::Rectangle(){
    this->length = 0;
    this->width = 0;
}

Rectangle::Rectangle(int length, int width)
{
    this->length = length;
    this->width = width;
}

Rectangle::~Rectangle()
{
    std::cout << "Going to destroy Rectangle object having length: " << length << " and width: " << width << std::endl;
}

void Rectangle::setLength(int length){
    this->length=length;
}
void Rectangle::setWidth(int width){
    this->width = width;
}
int Rectangle::getLength()const{
    return length;
}
int Rectangle::getWidth()const{
    return width;
}
int Rectangle::area(){
    return length*width;
}