#ifndef ASPELL

#define ASPELL

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ASpell
{
private:
    std::string name;
    std::string effects;
    ASpell(/* args */);
public:
    ASpell(std::string _name, std::string _effects);
    ASpell& operator=(const ASpell &rhs);
    ASpell(const ASpell &src);
    const std::string getName(void) const;
    const std::string getEffects(void) const;
    void launch(const ATarget &targ);
    virtual ASpell& clone() = 0;
    ~ASpell();
};

#endif