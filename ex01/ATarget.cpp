#include "ATarget.hpp"

ATarget::ATarget(std::string _type) : type(_type)
{

}
    
ATarget& ATarget::operator=(const ATarget &rhs)
{
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return *this; 
}

ATarget::ATarget(const ATarget &src)
{
    this->type = src.type;
    *this = src;
}

    void ATarget::getHitBySpell(const ASpell &rhs)
    {
        std::cout << this->getType() << " has been " << rhs.getEffects() << "!" << std::endl;
    }

    const std::string ATarget::getType(void) const
    {
        return(this->type);
    }
    
    ATarget::~ATarget()
    {

    }