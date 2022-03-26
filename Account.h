//
// Created by Zak. 
//

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <sstream>
#include <vector>
#include "Money.h"

class Account{
    private:
        //instance of money class to track balance
        Money balance;
        //vectors for deposits and withdrawals
        std::vector<Money> deposits;
        std::vector<Money> withdrawals;
        //to track if balance is up to date and the number of deposits/withdrawals made
        bool upToDate = true;
        int numDeposits = 0, numWithdrawals = 0;

    public:
        //parameterized constructor with an instance of money class passed in
        Account(Money);
        //methods to make deposits/withdrawals
        void makeDeposit(Money);
        void makeWithdrawals(Money);

        //overloaded output operator
        friend std::ostream& operator <<(std::ostream& os, const Account& acc);
};


#endif //ACCOUNT_H
