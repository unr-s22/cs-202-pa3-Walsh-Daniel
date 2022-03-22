//
// Created by Dan on 3/10/2022.
//

#include "Money .h"
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

