#ifndef DUMMY
#define DUMMY

#include "ASpell.hpp"

class Dummy : public ATarget
{
    public:
        Dummy(void);
        ~Dummy();
        virtual ATarget* clone() const;
};

#endif