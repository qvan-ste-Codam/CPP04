#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
    Animal* animals[100];

    for (int i = 0; i < 50; ++i) {
        animals[i] = new Dog;
        animals[i]->brain->createRandomIdeas();
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 10; ++j) {
            Dog* dogPtr = dynamic_cast<Dog*>(animals[i]);
            Dog tmp{*dogPtr};

            std::cout << "Old idea: " << animals[i]->brain->getIdea(j) << '\n';
            animals[i]->brain->setIdea(j, "foo");
            std::cout << "New idea: " << animals[i]->brain->getIdea(j) << '\n';
            std::cout << "Tmp animal idea: " << tmp.brain->getIdea(j) << '\n';
        }
    }

    for (int i = 50; i < 100; ++i) {
        animals[i] = new Cat;
    }

    for (int i = 0; i < 100; ++i) {
        delete animals[i];
    }

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
}
