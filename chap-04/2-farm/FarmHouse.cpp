#include "Animal.h"
#include "Cat.h"
#include "Chicken.h"
#include "Cow.h"
#include "Dog.h"
#include <vector>
#include "Opera.hpp"

void sing_a_lot(const Animal& animal, unsigned int times)
{
    if (times > 0) {
        while (--times > 0)
        {
            animal.sing(' ');
        }
        animal.sing('\n');
    }
}

int main()
{
    Cat     cat;
    Chicken chicken;
    Dog     dog;
    Cow     cow;

    sing_a_lot(cat, 2u);
    sing_a_lot(dog, 1u);
    sing_a_lot(cow, 3u);
    sing_a_lot(dog, 1u);
    sing_a_lot(chicken, 2u);
    
    std::vector<Animal*> animals;
    animals.push_back(&dog);
    animals.push_back(&cat);

    std::cout << "\nOne by one !" << std::endl;
    for (const auto& animal : animals) {
        animal->sing(' ');
    }
    std::cout << std::endl;

    Opera opera;
    std::cout << "\nOPERA !" << std::endl;
    opera.sing();
    return 0;
}
