#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <sstream>
#include <vector>
#include "Money.h"

class Account{
    private:
        Money balance;
        std::vector<Money> deposits;
        std::vector<Money> withdrawals;
        bool upToDate = true;
        int numDeposits = 0, numWithdrawals = 0;

    public:
        Account(Money);
        void makeDeposit(Money);
        void makeWithdrawals(Money);

        void getBalance();

        friend std::ostream& operator <<(std::ostream& os, const Account& acc);
};


#endif //ACCOUNT_H