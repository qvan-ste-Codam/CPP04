#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
   public:
    Cat();
    Cat(const Cat &other);
    ~Cat();

    Cat &operator=(const Cat &other);

    void makeSound() const override;
    void createRandomIdeas();
    void printNIdeas(size_t n) const;

   private:
    Brain *brain;
};

#endif
