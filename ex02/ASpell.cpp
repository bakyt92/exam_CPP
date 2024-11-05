#include "ASpell.hpp"
#include "ATarget.hpp"

    ASpell::ASpell(const ASpell &src)
    {
        this->effects = src.effects;
        this->name = src.name;
        *this = src;
    }

    ASpell& ASpell::operator=(const ASpell &rhs)
    {
        if (this != &rhs)
        {
            this->effects = rhs.effects;
            this->name = rhs.name;
        }
        return *this;
    }

    ASpell::ASpell(std::string _name, std::string _effects) : name(_name), effects(_effects)
    {

    }
    const std::string& ASpell::getName(void) const
    {
        return (this->name);
    }
    const std::string& ASpell::getEffects(void) const
    {
        return (this->effects);
    }

    void ASpell::launch(ATarget const &ref) const
    {
        ref.getHitBySpell(*this);
    }

    ASpell::~ASpell()
    {
    }