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
    } 
