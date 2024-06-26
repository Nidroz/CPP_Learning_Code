#pragma once

#include <iostream>

class Driver
{
    public:
        void pass_car_licence_exam() {
            _have_car_licence = true;
        }

        bool has_car_licence() const {
            return _have_car_licence;
        }

        void pass_air_licence_exam() {
            _have_air_licence = true;
        }

        bool has_air_licence() const {
            return _have_air_licence;
        }

    private:
        bool _have_car_licence = false;
        bool _have_air_licence = false;
};

class Vehicle
{
public:
    Vehicle(const Driver& driver)
        : _driver { driver }
    {}

    virtual ~Vehicle() {}

    virtual unsigned int drive() const = 0;

protected:
    

    const Driver& _driver;
};
