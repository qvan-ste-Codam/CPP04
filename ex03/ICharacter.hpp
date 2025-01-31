#ifndef I_CHARACTER_HPP
#define I_CHARACTER_HPP

class ICharacter {
   public:
	ICharacter();
	ICharacter(const ICharacter &other);
	~ICharacter();
	ICharacter &operator=(const ICharacter &other);
};

#endif
