#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "Fwooshed")
{

}
        
Fwoosh::~Fwoosh()
{

}

ASpell *Fwoosh::clone() const
{
    return (new Fwoosh());
}