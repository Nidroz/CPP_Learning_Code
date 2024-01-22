#pragma once

class Rectangle
{
public:
    Rectangle(float size);
    Rectangle(float length, float width);

    float get_length() const { return _length; }
    float get_width() const { return _width; }

    void scale(float ratio);

private:
    float _length;
    float _width;
};
