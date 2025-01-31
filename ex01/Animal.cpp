#include "Animal.hpp"

#include <iostream>

Animal::Animal(std::string type) : brain{new Brain}, type{type} {
    std::cout << "Created animal base" << std::endl;
}

Animal::Animal(const Animal& other)
    : brain{new Brain(*other.brain)}, type{other.type} {
    std::cout << "Created animal base" << std::endl;
}

Animal::~Animal() {
    std::cout << "Deleted animal base" << std::endl;
    delete this->brain;
}

Animal& ::Animal::operator=(const Animal & other) {
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

const std::string& Animal::getType() const { return this->type; }

void Animal::makeSound() const {};
