#include "Cat.hpp"

#include <iostream>

Cat::Cat() : Animal{"Cat"}, brain{new Brain} {
    std::cout << "Created cat" << std::endl;
}

Cat::Cat(const Cat& other) : Animal{other}, brain(new Brain{*other.brain}) {
    std::cout << "Created cat" << std::endl;
}

Cat::~Cat() {
    delete this->brain;
    std::cout << "Deleted cat" << std::endl;
}

Cat& ::Cat::operator=(const Cat & other) {
    if (this != &other) {
        Animal::operator=(other);
        this->brain = other.brain;
    }
    return *this;
}

void Cat::createRandomIdeas() { this->brain->createRandomIdeas(); }

void Cat::printNIdeas(size_t n) const {
    if (n > 100) {
        throw std::invalid_argument("Index out of bounds");
    }
    for (size_t i = 0; i < n; i++) {
        std::cout << this->brain->getIdea(i) << std::endl;
    }
}

void Cat::makeSound() const { std::cout << "Meow!" << std::endl; };
