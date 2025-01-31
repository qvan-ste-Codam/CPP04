#include <iostream>
#include <memory>

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {
    {
        const auto meta = std::make_unique<Animal>();
        const auto j = std::make_unique<Cat>();
        const auto i = std::make_unique<Dog>();
        const auto cpi = *j;
        const auto cij = std::make_unique<Cat>(*j);

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        std::cout << meta->getType() << " " << std::endl;
        std::cout << cij->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        cpi.makeSound();
        cij->makeSound();
        meta->makeSound();
    }
    {
        const auto meta = std::make_unique<WrongAnimal>();
        const auto j = std::make_unique<WrongCat>();
        const auto cpi = *j;

        std::cout << j->getType() << " " << std::endl;
        std::cout << meta->getType() << " " << std::endl;
        std::cout << cpi.getType() << " " << std::endl;

        j->makeSound();
        cpi.makeSound();
        meta->makeSound();
    }
}
