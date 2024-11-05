#ifndef SPELLBOOK
#define SPELLBOOK

#include "ASpell.hpp"
#include <map>

class SpellBook
{
private:
    SpellBook(const SpellBook &src);
    SpellBook& operator=(const SpellBook &rhs);
    std::map<std::string, ASpell*> book;
public:
    SpellBook(/* args */);
    void learnSpell(ASpell* spell_n);
    void forgetSpell(std::string const &spell_n);
    ASpell* createSpell(std::string const &spell_c);

    ~SpellBook();
};



#endif