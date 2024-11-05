#ifndef POLYMORPH
#define POLYMORPH

#include "ASpell.hpp"

class Polymorph : public ASpell
{
public:
    Polymorph(/* args */);
    ASpell* clone() const;
    ~Polymorph();
};

#endif