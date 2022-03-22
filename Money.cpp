//
// Created by Dan on 3/10/2022.
//

#include "Money.h"
#include<iostream>


Money::Money()
{
    dollars = 0;
    cents = 0;
}

Money::Money(int _dollars, int _cents)
{
    dollars = _dollars;
    cents = _cents;
}

void Money::setMoney(int m_dollars, int m_cents){
    int centsTotal, dollarsTotal;
    centsTotal = cents + m_cents;
    dollarsTotal = dollars + m_dollars;
    if(centsTotal >= 100){
        dollarsTotal = dollars + m_dollars + 1;
        centsTotal = centsTotal - 100;
    }
}

int Money::getDollars()
{
    return dollars;
}

int Money::getCents()
{
    return cents;
}

void Money::setDollars(int dollars)
{
    this->dollars = dollars;
}

void Money::setCents(int cents)
{
    this->cents = cents;
}

std::ostream& operator << (std::ostream &os, const Money &money)
{
    os << "$" << money.dollars << "." << money.cents;
    return os;
}

