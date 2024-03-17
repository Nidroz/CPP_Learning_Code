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

    private:
        bool _have_car_licence = false;
};

class Vehicle
{
public:
    Vehicle(const Driver& driver)
        : _driver { driver }
    {}

    virtual ~Vehicle() {}

    virtual unsigned int drive() const
    {
        std::cerr << "Not implemented" << std::endl;
        return 0u;
    }

protected:
    const Driver& _driver;
};
