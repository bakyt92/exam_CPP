#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(const TargetGenerator &src)
{
    this->array = src.array;
    *this = src;
}
TargetGenerator& TargetGenerator::operator=(const TargetGenerator &rhs)
    {
        if (this != &rhs)
            this->array = rhs.array;
        return (*this);
    }

    TargetGenerator::TargetGenerator(/* args */)
    {

    }
    TargetGenerator::~TargetGenerator()
    {
        std::map<std::string, ATarget*>::iterator iter = array.begin();
        while (iter != array.end())
        {
            delete iter->second;
            iter++;
        }
        array.clear();
    }

    void TargetGenerator::learnTargetType(ATarget* targ)
    {
        if (targ)
        {
            array.insert(std::pair <std::string, ATarget*>(targ->getType(), targ->clone()));
        }
    }

    void TargetGenerator::forgetTargetType(std::string const &ref)
    {
        std::map<std::string, ATarget*>::iterator iter = array.find(ref);
        if (iter != array.end())
        {
            delete iter->second;
        }
        array.erase(ref);
    }
    ATarget* TargetGenerator::createTarget(std::string const &ref)
    {
        std::map<std::string, ATarget*>::iterator iter = array.find(ref);
        if (iter != array.end())
        {
            return (array[ref]);
        }
        return NULL;
    }