#ifndef DUMMY
#define DUMMY

#include "ATarget.hpp"

class Dummy : public ATarget
{
public:
    Dummy(/* args */);
    ATarget* clone() const;
    ~Dummy();
};


#endif