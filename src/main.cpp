// src/main.cpp
#include "Car.hpp"

int main() {
    // Using constructor
    Car car1("Toyota", "Red", 2010, "Gasoline");
    car1.printDetails();

    // Demonstrating copy constructor
    Car car2 = car1;
    car2.setColor("Blue");  // Change color to show it's a separate object
    car2.printDetails();

    // Demonstrating move constructor
    Car car3 = std::move(car1);
    car3.setBrand("Honda");  // Change brand after move
    car3.printDetails();
    car1.printDetails();

    return 0;
}
