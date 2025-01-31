#ifndef A_MATERIA_HPP
#define A_MATERIA_HPP
#include <string>

#include "ICharacter.hpp"

class AMateria : ICharacter {
   public:
    AMateria();
    AMateria(const AMateria &other);
    ~AMateria();
    AMateria &operator=(const AMateria &other);

    std::string const &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif
