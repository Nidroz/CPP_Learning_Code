#include "Rectangle.h"

#include <iostream>

int main()
{
    Rectangle rect(2.f, 4.f);
    std::cout << "{ L: " << rect.get_length() << ", W: " << rect.get_width() << " }" << std::endl;

    rect.scale(3);
    std::cout << "{ L: " << rect.get_length() << ", W: " << rect.get_width() << " }" << std::endl;

    // carré (Rectangle à 1 paramètre)
    Rectangle square(2.5f);
    std::cout << "{ L: " << square.get_length() << ", W: " << square.get_width() << " }" << std::endl;

    // default Rectangle
    Rectangle::_default_size = 2.f;
    Rectangle s1; // -> size is 2.f
    Rectangle s2; // -> size is 2.f
    std::cout << "s1 size is -> " << s1._default_size << std::endl;
    std::cout << "s2 size is -> " << s2._default_size << std::endl;

    Rectangle::_default_size = 7.f;
    Rectangle s3; // -> size is 7.f
    Rectangle s4; // -> size is 7.f
    Rectangle s5; // -> size is 7.f
    std::cout << "s3 size is -> " << s3._default_size << std::endl;
    std::cout << "s4 size is -> " << s4._default_size << std::endl;
    std::cout << "s5 size is -> " << s5._default_size << std::endl;

    return 0;
}
