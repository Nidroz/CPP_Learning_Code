// Implement Rectangle functions here.
#include "Rectangle.h"

//float Rectangle::_default_size = 0.f;

Rectangle::Rectangle()
    : Rectangle::Rectangle { _default_size }
    {}

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