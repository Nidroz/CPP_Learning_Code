#pragma once

class Rectangle
{
public:
    Rectangle();
    Rectangle(float size);
    Rectangle(float length, float width);

    float get_length() const { return _length; }
    float get_width() const { return _width; }

    void scale(float ratio);

    static void set_default_size(float new_default_size);

private:
    float _length;
    float _width;
    static inline float _default_size;
};
