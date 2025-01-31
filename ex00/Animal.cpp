#include "Animal.hpp"

#include <iostream>

Animal::Animal(std::string type) : type{type} {
    std::cout << "Created animal base" << std::endl;
}

Animal::Animal(const Animal& other) : type{other.type} {
    std::cout << "Created animal base" << std::endl;
}

Animal::~Animal() { std::cout << "Deleted animal base" << std::endl; }

Animal& ::Animal::operator=(const Animal & other) {
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

const std::string& Animal::getType() const { return this->type; }

void Animal::makeSound() const {};
