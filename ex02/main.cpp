#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
    Animal* animals[100];

    for (int i = 0; i < 50; ++i) {
        animals[i] = new Dog;
        auto dog = static_cast<Dog*>(animals[i]);
        dog->createRandomIdeas();
        dog->printNIdeas(5);
    }

    for (int i = 50; i < 100; ++i) {
        animals[i] = new Cat;
        auto cat = static_cast<Cat*>(animals[i]);
        cat->createRandomIdeas();
        cat->printNIdeas(5);
    }

    for (int i = 0; i < 100; ++i) {
        delete animals[i];
    }

    // auto animal = Animal{};
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

    Dog originalDog;
    originalDog.createRandomIdeas();
    Dog copiedDog = originalDog;

    originalDog.printNIdeas(2);
    copiedDog.printNIdeas(2);
    originalDog.createRandomIdeas();
    originalDog.printNIdeas(2);
    copiedDog.printNIdeas(2);

    Cat originalCat;
    originalCat.createRandomIdeas();
    Cat copyCat = originalCat;

    originalCat.printNIdeas(2);
    copyCat.printNIdeas(2);
    originalCat.createRandomIdeas();
    originalCat.printNIdeas(2);
    copyCat.printNIdeas(2);
}
