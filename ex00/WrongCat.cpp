#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat() : WrongAnimal{"WrongCat"} {
    std::cout << "Created wrong cat" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal{other} {
    std::cout << "Created wrong cat" << std::endl;
}

WrongCat::~WrongCat() { std::cout << "Deleted wrong cat" << std::endl; }

WrongCat& ::WrongCat::operator=(const WrongCat & other) {
    if (this != &other) {
        WrongCat::operator=(other);
    }
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "*Cricket noises*" << std::endl;
}
