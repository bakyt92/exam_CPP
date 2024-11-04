#ifndef DUMMY
#define DUMMY

#include "ATarget.hpp"

class Dummy : public ATarget
{
    public:
        Dummy(void);
        ~Dummy();
        ATarget* clone() const;
};

#endif