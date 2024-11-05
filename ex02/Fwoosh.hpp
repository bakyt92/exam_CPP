#ifndef FWOOSH
#define FWOOSH

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
public:
    Fwoosh(/* args */);
    ASpell* clone() const;
    ~Fwoosh();
};


#endif