//
// Created by Dan on 3/10/2022.
//

#ifndef CS_202_PA3_WALSH_DANIEL_MONEY_H
#define CS_202_PA3_WALSH_DANIEL_MONEY_H
#include <ostream>

class Money
{
private:

    int dollars;
    int cents;

public:
    //defualt constructor

    Money();

    //paramterized constructor
    Money(int _dollars, int _cents);

    int getDollars();
    int getCents();

    void setDollars(int dollars);
    void setCents(int cents);
    
    void setMoney(int, int);

    friend std::ostream& operator << (std::ostream &os, const Money &money);

};
#endif //CS_202_PA3_WALSH_DANIEL_MONEY_H
