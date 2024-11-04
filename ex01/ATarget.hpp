#ifndef ATARGET

#define ATARGET

#include "ASpell.hpp"

class ATarget
{
private:
    std::string type;
    ATarget(/* args */);
public:
    ATarget(std::string _type);
    ATarget& operator=(const ATarget &rhs);
    ATarget(const ATarget &src);
    void getHitBySpell(const ASpell &rhs);
    const std::string getType(void) const;
    virtual ATarget& clone() = 0;
    ~ATarget();
};

ATarget::ATarget(/* args */)
{
}

ATarget::~ATarget()
{
}


#endif