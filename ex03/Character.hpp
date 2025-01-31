#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class Character {
   public:
	Character();
	Character(const Character &other);
	~Character();
	Character &operator=(const Character &other);
};

#endif
