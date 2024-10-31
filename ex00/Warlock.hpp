#ifndef WARLOCK
#define WARLOCK

#include <string>
#include <iostream>

class Warlock
{
private:
    std::string name;
    std::string title;
    Warlock(/* args */);
public:
    const std::string& getName(void) const;
    const std::string& getTitle(void) const;
    void setTitle (const std::string &_title);
    Warlock(std::string _name, std::string _title);
    Warlock(const Warlock &rhs);
    void introduce() const;
    Warlock& operator=(const Warlock &rhs);
    ~Warlock();
};

#endif
