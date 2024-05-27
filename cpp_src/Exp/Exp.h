#ifndef EXP_H
#define EXP_H

class Exp {
    
public:
    int base, exp;
    Exp(int base, int b);
    Exp(int base);
    Exp();

    int getValue();
    int getBase();
    int getExp();
    bool equals(Exp base);
};

#endif