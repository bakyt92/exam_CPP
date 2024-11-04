#ifndef WARLOCK

#define WARLOCK
#include <iostream>
#include <string>
#include "ASpell.hpp"
#include <vector>
#include <map>
#include <utility>

class Warlock
{
private:
    std::string name;
    std::string title;
    Warlock(/* args */);
    std::map<std::string, ASpell *> arr;
public:
    Warlock(std::string _name, std::string _title);
    Warlock(const Warlock &src);
    Warlock& operator=(const Warlock &rhs);
    const std::string& getName(void) const;
    const std::string& getTitle(void) const;
    void setTitle(const std::string &newTitle);
    ~Warlock();
    void introduce() const;
    void learnSpell(ASpell *spell_new);
    void forgetSpell(std::string spell_name);
    void launchSpell(std::string spell_name, ATarget const &ref);
};


#endif

/*
* learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
* forgetSpell, takes a string corresponding a to a spell's name, and makes the
  Warlock forget it. If it's not a known spell, does nothing.
* launchSpell, takes a string (a spell name) and a reference to ATarget, that
  launches the spell on the selected target. If it's not a known spell, does
  nothing.
*/