#ifndef WARLOCK
#define WARLOCK

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock
{
private:
    Warlock(/* args */);
    Warlock(const Warlock &src);
    Warlock& operator=(const Warlock &rhs);
    std::string name;
    std::string title;
    // std::map<std::string, ASpell *> array;
    SpellBook Book1;
public:
    Warlock(std::string _name, std::string _title);
    const std::string& getName(void) const;
    const std::string& getTitle(void) const;
    void setTitle(const std::string& newTitle);
    void introduce(void) const;
    void learnSpell(ASpell *ptr) ;
    void forgetSpell(const std::string spell_f);
    void launchSpell(const std::string spell_n, ATarget &ref);
    ~Warlock();
};



#endif