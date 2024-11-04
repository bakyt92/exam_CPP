#ifndef WARLOCK

#define WARLOCK
#include <iostream>
#include <string>

class Warlock
{
private:
    std::string name;
    std::string title;
    Warlock(/* args */);
public:
    Warlock(std::string _name, std::string _title);
    Warlock(const Warlock &src);
    Warlock& operator=(const Warlock &rhs);
    const std::string& getName(void) const;
    const std::string& getTitle(void) const;
    void setTitle(const std::string &newTitle);
    ~Warlock();
    void introduce() const;
};


#endif
