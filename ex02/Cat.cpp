#include "Cat.hpp"

#include <iostream>

Cat::Cat() : Animal{"Cat"} { std::cout << "Created cat" << std::endl; }

Cat::Cat(const Cat& other) : Animal{other} {
    std::cout << "Created cat" << std::endl;
}

Cat::~Cat() { std::cout << "Deleted cat" << std::endl; }

Cat& ::Cat::operator=(const Cat & other) {
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}

void Cat::makeSound() const { std::cout << "Meow!" << std::endl; };
