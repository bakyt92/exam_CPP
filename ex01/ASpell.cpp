#include "ASpell.hpp"

ASpell::ASpell(std::string _name, std::string _effects): name(_name), effects(_effects)
{
}
    
    ASpell& ASpell::operator=(const ASpell &rhs)
    {
        if (this != &rhs)
        {
            this->name = rhs.name;
            this->effects = rhs.effects;
        }
        return *this;
    }
    
    ASpell::ASpell(const ASpell &src)
    {
        this->name = src.name;
        this->effects = src.effects;
        *this = src;
    }
    
    const std::string ASpell::getName(void) const
    {
        return (this->name);
    }
    
    const std::string ASpell::getEffects(void) const
    {
        return (this->effects);
    }
// problem with launch
    void ASpell::launch(const ATarget &targ)
    {
        targ.getHitBySpell(*this);
    }

    // virtual ASpell& ASpell::clone() = 0
    // {
    //     return *this;
    // }

    ASpell::~ASpell()
    {

    }