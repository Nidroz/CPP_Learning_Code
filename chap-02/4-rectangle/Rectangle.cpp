// Implement Rectangle functions here.
#include "Rectangle.h"

Rectangle::Rectangle(float size) 
    : Rectangle::Rectangle { size, size }
    {}

Rectangle::Rectangle(float length, float width)
    : _length { length }
    , _width { width }
    {}

void Rectangle::scale(float ratio) {
    _length *= ratio;
    _width *= ratio;
}