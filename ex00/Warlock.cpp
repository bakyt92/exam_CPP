#include "Warlock.hpp"

const std::string& Warlock::getName(void) const
{
    return (this->name);
}

const std::string& Warlock::getTitle(void) const
{
    return (this->title);
}

void Warlock::setTitle (const std::string &_title)
{
    this->title = _title;
    return;
}

void Warlock::introduce() const
{
    std::cout << getName() << ": I am " << getName() << ", " << getTitle() << '!' << std::endl;
}


Warlock::Warlock(std::string _name, std::string _title): name(_name), title(_title)
{
    introduce();
}
Warlock::Warlock(const Warlock &rhs)
{
    *this = rhs; 
}
    
Warlock& Warlock::operator=(const Warlock &rhs)
{
    this->title = rhs.name;
    this->name = rhs.name;
    return(*this);
}    
    
Warlock::~Warlock()
{
    std::cout << getName() << ": Ny job here is done!" << std::endl;
}
