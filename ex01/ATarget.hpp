#ifndef ATARGET

#define ATARGET

#include "ASpell.hpp"

class ASpell;

class ATarget
{
private:
    std::string type;
    ATarget(/* args */);
public:
    ATarget(std::string _type);
    ATarget& operator=(const ATarget &rhs);
    ATarget(const ATarget &src);
    void getHitBySpell(const ASpell &rhs) const;
    const std::string& getType(void) const;
    virtual ATarget* clone() const = 0;
    virtual ~ATarget();
};

#endif