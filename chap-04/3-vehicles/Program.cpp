#include "Car.h"
#include "Scooter.h"
#include "Vehicle.h"
#include "FlyingCar.hpp"

#include <iostream>

int main()
{
    // Vehicule abstrait
    //Driver test_driver;
    //Vehicle vehicle { test_driver };

    // Constructeur protégé => erreur de compilation comme quoi Vehicle est 'protected',
    // de ce fait on ne peut pas l'instancier (comportement voulu)

    // Fonction virtuelle pure => erreur de compilation comme quoi on ne peut pas déclarer Vehicle abstrait,
    // dû au fait que la fonction 'drive' est virtual pure

    //////
    Driver     car_driver;
    Car        car { car_driver, 60u };
    const auto distance_in_car = car.drive();
    std::cout << distance_in_car << " km in a car." << std::endl;

    Driver     mini_gangster;
    Scooter    scooter { mini_gangster, 180u };
    const auto distance_in_scooter = scooter.drive();
    std::cout << distance_in_scooter << " km with a scooter." << std::endl;

    Driver ben_laden;
    ben_laden.pass_air_licence_exam();
    FlyingCar flyingCar { ben_laden, 390u };
    const auto distance_in_flying_car = flyingCar.drive();
    std::cout << distance_in_flying_car << " km with a flying car." << std::endl;

    return 0;
}