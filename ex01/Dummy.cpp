#include "Dummy.hpp"

Dummy::Dummy(void) : ATarget("Target Practice Dummy")
{

}
        
Dummy::~Dummy()
{

}

Dummy& Dummy::clone()
{
    Dummy Fw;
    Fw = *this;
    return (Fw);
}