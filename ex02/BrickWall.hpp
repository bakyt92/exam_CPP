#ifndef BRICKWALL
#define BRICKWALL

#include "ATarget.hpp"

class BrickWall : public ATarget
{
public:
    BrickWall(/* args */);
    ATarget* clone() const;
    ~BrickWall();
};

#endif