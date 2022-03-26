//
// Created by Dan on 3/10/2022.
// Contributor: Zak Kholmatov

#ifndef CS_202_PA3_WALSH_DANIEL_MONEY_H
#define CS_202_PA3_WALSH_DANIEL_MONEY_H
#include <ostream>

class Money
{
    private:

        int dollars;
        int cents;

    public:
        //default constructor

        Money();

        //parameterized constructor
        Money(int _dollars, int _cents);

        int getDollars();
        int getCents();

        void setDollars(int dollars);
        void setCents(int cents);
        
        //overloaded relational operators
        friend bool operator <(const Money&, const Money&);
        friend bool operator >(const Money&, const Money&);
        friend bool operator <=(const Money&, const Money&);
        friend bool operator >=(const Money&, const Money&);
        friend bool operator !=(const Money&, const Money&);
        friend bool operator ==(const Money&, const Money&);

        //overloaded math operators
        friend Money operator +(const Money&, const Money&);
        friend Money operator -(const Money&, const Money&);

        //overloaded output operator
        friend std::ostream& operator << (std::ostream &os, const Money &money);

};
#endif //CS_202_PA3_WALSH_DANIEL_MONEY_H
