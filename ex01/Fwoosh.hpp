#ifndef FWOOSH
#define FWOOSH

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
    private: 
        
    public:
        Fwoosh(void);
        ~Fwoosh();
        Fwoosh& clone();
};

#endif