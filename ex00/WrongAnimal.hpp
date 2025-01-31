#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP
#include <string>

class WrongAnimal {
   public:
    WrongAnimal(std::string type = "WrongBase");
    WrongAnimal(const WrongAnimal &other);
    ~WrongAnimal();

    WrongAnimal &operator=(const WrongAnimal &other);

    virtual void makeSound() const;
    const std::string &getType() const;

   protected:
    std::string type;
};

#endif
