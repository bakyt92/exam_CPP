#include "Warlock.hpp"

    Warlock::Warlock(const Warlock &src)
    {
        this->title = src.title;
        this->name = src.name;
        *this = src;
    }

    Warlock& Warlock::operator=(const Warlock &rhs)
    {
        if (this != &rhs)
        {
            this->title = rhs.title;
            this->name = rhs.name;
        }
        return *this;
    }

    Warlock::Warlock(std::string _name, std::string _title) : name(_name), title(_title)
    {
        std::cout << this->getName() << ": This looks like another boring day." << std::endl;
    }

    const std::string& Warlock::getName(void) const
    {
        return (this->name);
    }

    const std::string& Warlock::getTitle(void) const
    {
        return (this->title);
    }
    
    
    void Warlock::setTitle(const std::string& newTitle)
    {
        this->title = newTitle;
    }

    void Warlock::introduce(void) const
    {
        std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
    }

    void Warlock::learnSpell(ASpell *ptr)
    {
        Book1.learnSpell(ptr);
    }

    void Warlock::forgetSpell(const std::string spell_f)
    {
        Book1.forgetSpell(spell_f);
    }
    void Warlock::launchSpell(const std::string spell_n, ATarget &ref)
    {
        ASpell *temp = Book1.createSpell(spell_n);
        if (temp)
            temp->launch(ref);
    }

    Warlock::~Warlock()
    {
        std::cout << this->getName() << ": My job here is done!" << std::endl;
    }