#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal{"Dog"}, brain{new Brain} {
    std::cout << "Created dog" << std::endl;
}

Dog::Dog(const Dog& other) : Animal{other}, brain(new Brain{*other.brain}) {
    std::cout << "Created dog" << std::endl;
}

Dog::~Dog() {
    delete this->brain;
    std::cout << "Deleted dog" << std::endl;
}

Dog& ::Dog::operator=(const Dog & other) {
    if (this != &other) {
        Animal::operator=(other);
        this->brain = other.brain;
    }
    return *this;
}

void Dog::createRandomIdeas() { this->brain->createRandomIdeas(); }

void Dog::printNIdeas(size_t n) const {
    if (n > 100) {
        throw std::invalid_argument("Index out of bounds");
    }
    for (size_t i = 0; i < n; i++) {
        std::cout << this->brain->getIdea(i) << std::endl;
    }
}

void Dog::makeSound() const { std::cout << "Woof!" << std::endl; };
