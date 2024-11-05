#include "Fwoosh.hpp"
#include "ASpell.hpp"

Fwoosh::Fwoosh(/* args */) : ASpell("Fwoosh", "fwooshed")
{

}
    ASpell* Fwoosh::clone() const
    {
        return (new Fwoosh());
    }

Fwoosh::~Fwoosh()
{
}
