#include "Warlock.hpp"

    Warlock::Warlock(std::string _name, std::string _title) : name(_name), title(_title)
    {
        std::cout << this->getName() << ": This looks like another boring day." << std::endl;
    }  
    
    Warlock::Warlock(const Warlock &src)
    {
        this->name = src.name;
        this->title = src.title;
        *this = src;
    }

    Warlock& Warlock::operator=(const Warlock &rhs)
    {
        if (this != &rhs)
        {
            this->name = rhs.name;
            this->title = rhs.title;
        }
        return *this;
    }

    const std::string& Warlock::getName(void) const
    {
        return (this->name);
    }
    
    const std::string& Warlock::getTitle(void) const
    {
        return (this->title);
    }

    void Warlock::introduce() const
    {
        std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
    }

    void Warlock::setTitle(const std::string &newTitle)
    {
        this->title = newTitle;
        return;
    }

    Warlock::~Warlock()
    {
        std::cout << this->getName() << ": My job here is done!" << std::endl;
        std::map <std::string, ASpell*>::iterator it_beg = this->arr.begin();
        std::map <std::string, ASpell*>::iterator it_end = this->arr.end();
        while (it_beg != it_end)
        {
            delete it_beg.second;
            ++it_beg;
        }
        this->arr.clear();
    } 

void Warlock::learnSpell(ASpell *spell_new)
    {
        if (spell_new)
        {
            arr.insert(std::pair<std::string, ASpell*>(spell_new->getName, spell_new->clone()));
        }
    }
    
    void Warlock::forgetSpell(std::string spell_name);
    {
        std::map<std::string, ASpell*>::iterator it_find = arr.find(spell_name);
        if (it_find != arr.end())
        {
            delete it_find.second;
        }
        arr.erase(spell_name);
    }

    void Warlock::launchSpell(std::string spell_name, ATarget const &ref)
    {
        ASpell* spell = arr[spell_name];
        if (spell)
            spell->launch(ref);
    }


