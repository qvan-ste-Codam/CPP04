#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal{"Dog"} { std::cout << "Created dog" << std::endl; }

Dog::Dog(const Dog& other) : Animal{other} {
    std::cout << "Created dog" << std::endl;
}

Dog::~Dog() { std::cout << "Deleted dog" << std::endl; }

Dog& ::Dog::operator=(const Dog & other) {
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}

void Dog::makeSound() const { std::cout << "Woof!" << std::endl; };
