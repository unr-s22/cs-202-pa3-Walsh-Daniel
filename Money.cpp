//
// Created by Dan on 3/10/2022.
// Contributed by Zak Kholmatov
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

bool operator <(const Money &lhs, const Money &rhs){
    if(lhs.dollars < rhs.dollars){
        return true;
    }
    else if(lhs.dollars == rhs.dollars){
        if(lhs.cents < rhs.cents){
            return true;
        }
    }
    return false;
}

bool operator >(const Money &lhs, const Money &rhs){
    if(lhs.dollars > rhs.dollars){
        return true;
    }
    else if(lhs.dollars == rhs.dollars){
        if(lhs.cents > rhs.cents){
            return true;
        }
    }
    return false;
}

bool operator <=(const Money &lhs, const Money &rhs){
    if(lhs.dollars <= rhs.dollars){
        return true;
    }
    else if(lhs.dollars == rhs.dollars){
        if(lhs.cents <= rhs.cents){
            return true;
        }
    }
    return false;
}

bool operator >=(const Money &lhs, const Money &rhs){
    if(lhs.dollars >= rhs.dollars){
        return true;
    }
    else if(lhs.dollars == rhs.dollars){
        if(lhs.cents >= rhs.cents){
            return true;
        }
    }
    return false;
}

bool operator !=(const Money &lhs, const Money &rhs){
    if(lhs.dollars != rhs.dollars){
        return true;
    }
    else if(lhs.dollars == rhs.dollars){
        if(lhs.cents != rhs.cents){
            return true;
        }
    }
    return false;
}

bool operator ==(const Money &lhs, const Money &rhs){
    if(lhs.dollars == rhs.dollars){
        return true;
    }
    else if(lhs.dollars == rhs.dollars){
        if(lhs.cents == rhs.cents){
            return true;
        }
    }
    return false;
}

Money operator +(const Money &lhs, const Money &rhs){
    Money m;
    m.cents = lhs.cents + rhs.cents;
    m.dollars = lhs.dollars + rhs.dollars;
    if(m.cents >= 100){
        m.cents = m.cents - 100;
        m.dollars = lhs.dollars + rhs.dollars + 1;
    }

    return m;
}

Money operator -(const Money &lhs, const Money &rhs){
    Money m;
    m.cents = lhs.cents - rhs.cents;
    m.dollars = lhs.dollars - rhs.dollars;
    if(m.cents < 0){
        m.cents = m.cents + 100;
        m.dollars = lhs.dollars - rhs.dollars - 1;
    }

    return m;
}

std::ostream& operator << (std::ostream &os, const Money &money)
{
    os << "$" << money.dollars << "." << money.cents;
    return os;
}

