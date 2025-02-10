#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>

class Animal {
   public:
    Animal(std::string type = "Base");
    Animal(const Animal &other);
    virtual ~Animal();

    Animal &operator=(const Animal &other);

    virtual void makeSound() const;
    const std::string &getType() const;

   protected:
    std::string type;
};

#endif
