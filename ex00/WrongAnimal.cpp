#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal(std::string type) : type{type} {
    std::cout << "Created wrong animal base" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type{other.type} {
    std::cout << "Created wrong animal base" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Deleted wrong animal base" << std::endl;
}

WrongAnimal& ::WrongAnimal::operator=(const WrongAnimal & other) {
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

const std::string& WrongAnimal::getType() const { return this->type; }

void WrongAnimal::makeSound() const {};
