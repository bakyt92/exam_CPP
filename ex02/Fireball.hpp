#ifndef FIREBALL
#define FIREBALL

#include "ASpell.hpp"

class Fireball : public ASpell
{
public:
    Fireball(/* args */);
    ASpell* clone() const;
    ~Fireball();
};

#endif