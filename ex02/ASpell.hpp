#ifndef ASPELL
#define ASPELL

#include <iostream>
#include <string>

class ATarget;

class ASpell
{
private:
    ASpell(/* args */);
    ASpell(const ASpell &src);
    ASpell& operator=(const ASpell &rhs);
    std::string name;
    std::string effects;
public:
    ASpell(std::string _name, std::string _effects);
    void launch(ATarget const &ref) const;
    const std::string& getName(void) const;
    const std::string& getEffects(void) const;
    virtual ASpell* clone() const = 0;
    virtual ~ASpell();
};

#endif