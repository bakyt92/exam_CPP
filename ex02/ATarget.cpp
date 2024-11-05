#include "ATarget.hpp"
#include "ASpell.hpp"

    ATarget::ATarget(const ATarget &src)
    {
        this->type = src.type;
        *this = src;
    }

    ATarget& ATarget::operator=(const ATarget &rhs)
    {
        if (this != &rhs)
        {
            this->type = rhs.type;
        }
        return *this;
    }

    ATarget::ATarget(std::string _type) : type(_type)
    {
    }

    const std::string& ATarget::getType(void) const
    {
        return (this->type);
    }

    void ATarget::getHitBySpell(ASpell const &spell) const
    {
        std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
    }

    ATarget::~ATarget()
    {
    }


