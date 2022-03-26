//
// Created by Dan on 3/21/2022.
// Contributed by Zak Kholmatov
//
#include <iostream>
#include "Account.h"

int main()
{
    //instance of account class and checking initial balance
    Account acc(Money(300, 23));
    std::cout << acc << std::endl;
    acc.makeDeposit(Money(200, 00));
    acc.makeDeposit(Money(300, 24));
    acc.makeDeposit(Money(501, 22));
    //checking balance after deposits
    std::cout << acc << std::endl;
    acc.makeWithdrawals(Money(300, 10));
    acc.makeWithdrawals(Money(201, 34));
    //checking balance after withdrawals
    std::cout << acc << std::endl;
    
    //checking if relational operators are working
    //<= and >= would work the same way since the code is almost identical
    Money m(120,10);
    Money n(100,20);
    if(m < n){
        std::cout << "second one is bigger" << std::endl;
    }
    else if(m > n){
        std::cout << "first one is bigger" << std::endl;
    }
    else if(m == n){
        std::cout << "they're the same" << std::endl;
    }
    
    //checking if math operators are working
    Money z;
    z = m + n;
    std::cout << z << std::endl;
    z = m - n;
    std::cout << z << std::endl;


    return 0;
}

