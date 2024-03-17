#pragma once

#include "Car.h"

class FlyingCar : public Car
{
public:
    FlyingCar(const Driver& driver, unsigned int speed)
        : Car(driver, speed)
        , _flying_speed { speed * 10u } {}

    unsigned int drive() const override {
        if (_driver.has_air_licence()) {
            std::cout << "Sweeesh!" << std::endl;
            return _flying_speed;
        } else {
            std::cout << "No air licence detected ! Switch in ground mode !" << std::endl;
            return Car::drive();
        }
        // ou alors au lieu d'avoir un champ _flying_speed,
        // on aurait pu mettre le champ _speed dans Car à 'protected' (afin de s'en servir ici),
        // et return directement dans cette méthode: '_speed * 10u
    }

private:
    unsigned int _flying_speed = 0u;
};