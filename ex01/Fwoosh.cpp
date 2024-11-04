#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "Fwooshed")
{

}
        
Fwoosh::~Fwoosh()
{

}

Fwoosh& Fwoosh::clone()
{
    Fwoosh Fw;
    Fw = *this;
    return (Fw);
}