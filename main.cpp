//
// Created by Dan on 3/21/2022.
//
#include <iostream>
#include "Account.h"

int main()
{
    Account acc(Money(300, 23));
    acc.makeDeposit(Money(200, 20));
    acc.makeDeposit(Money(300, 24));
    acc.makeDeposit(Money(501, 22));
    std::cout << acc << std::endl;



    return 0;
}

