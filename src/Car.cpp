// src/Car.cpp
#include "Car.hpp"

Car::Car(const std::string& brand, const std::string& color, int year, const std::string& gasType)
    : brand(brand), color(color), year(year), gasType(new std::string(gasType)) {
    std::cout << "Constructor called for " << this->brand << "\n";
}

// Copy constructor
Car::Car(const Car& other)
    : brand(other.brand), color(other.color), year(other.year), gasType(new std::string(*other.gasType)) {
    std::cout << "Copy constructor called for " << this->brand << "\n";
}

// Move constructor
Car::Car(Car&& other) noexcept
    : brand(std::move(other.brand)), color(std::move(other.color)), year(other.year), gasType(other.gasType) {
    other.gasType = nullptr;  
    std::cout << "Move constructor called\n";
}

// Destructor
Car::~Car() {
    delete gasType;  // Release heap memory
    std::cout << "Destructor called\n";
}

// Getters
std::string Car::getBrand() const { return brand; }
std::string Car::getColor() const { return color; }
int Car::getYear() const { return year; }
std::string Car::getGasType() const { return gasType ? *gasType : "Unknown"; }

// Setters
void Car::setBrand(const std::string& brand) { this->brand = brand; }
void Car::setColor(const std::string& color) { this->color = color; }
void Car::setYear(int year) { this->year = year; }
void Car::setGasType(const std::string& gasType) {
    if (this->gasType) {
        *(this->gasType) = gasType;
    } else {
        this->gasType = new std::string(gasType);
    }
}

// Print 
void Car::printDetails() const {
    std::cout << "Car Details: Brand=" << brand 
              << ", Color=" << color 
              << ", Year=" << year 
              << ", Gas Type=" << getGasType() << "\n";
}
