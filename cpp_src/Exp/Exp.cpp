#include "Exp.h"

Exp::Exp(int base, int b) {
     this->base = base;
     exp = b;
}

Exp::Exp(int base) {
     this->base = base;
     exp = 1;
}

Exp::Exp() {
     base = 1;
     exp = 1;
}

int Exp::getValue() //9 3*3
{
    int result = 1;
    for(int i = 0; i < exp; i++)
    {
        result = result * exp;
    }
    return result;
}

int Exp::getBase()  //
{
    return base;
}

int Exp::getExp()
{
    return exp;
}

bool Exp::equals(Exp b)
{
    if(getValue() == b.getValue())
        return true;
    else
        return false;
}