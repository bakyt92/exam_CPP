#ifndef ATARGET
#define ATARGET

#include <iostream>
#include <string>

class ASpell;

class ATarget
{
private:
    ATarget(/* args */);
    ATarget(const ATarget &src);
    ATarget& operator=(const ATarget &rhs);
    std::string type;
public:
    ATarget(std::string _type);
    const std::string& getType(void) const;
    virtual ATarget* clone() const = 0;
    void getHitBySpell(ASpell const &spell) const;
    virtual ~ATarget();
};


#endif