#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
   public:
    Dog();
    Dog(const Dog &other);
    ~Dog();

    Dog &operator=(const Dog &other);

    void makeSound() const override;
    void createRandomIdeas();
    void printNIdeas(size_t n) const;

   private:
    Brain *brain;
};

#endif
