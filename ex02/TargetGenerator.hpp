#ifndef TARGETGENERATOR
#define TARGETGENERATOR

#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
private:
    TargetGenerator(const TargetGenerator &src);
    TargetGenerator& operator=(const TargetGenerator &rhs);
    std::map<std::string, ATarget*> array;
public:
    TargetGenerator(/* args */);
    ~TargetGenerator();
    void learnTargetType(ATarget* targ);
    void forgetTargetType(std::string const &ref);
    ATarget* createTarget(std::string const &ref);
};

#endif