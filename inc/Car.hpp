// inc/Car.hpp
#pragma once
#include <string>
#include <iostream>

class Car {
private:
    std::string brand;
    std::string color;
    int year;
    std::string* gasType; 
public:
    // Constructors
    Car(const std::string& brand, const std::string& color, int year, const std::string& gasType);
    Car(const Car& other);       // Copy constructor
    Car(Car&& other) noexcept;   // Move constructor

    // Destructor
    ~Car();

    // Getters
    std::string getBrand() const;
    std::string getColor() const;
    int getYear() const;
    std::string getGasType() const;

    // Setters
    void setBrand(const std::string& brand);
    void setColor(const std::string& color);
    void setYear(int year);
    void setGasType(const std::string& gasType);

    // Print function
    void printDetails() const;
};
