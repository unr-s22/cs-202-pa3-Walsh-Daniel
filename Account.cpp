//
// Created by Zak.
//


#include "Account.h"
#include <numeric>

Account::Account(Money money){
    balance = money;
}

void Account::makeDeposit(Money m_deposit){
    deposits.push_back(m_deposit);
    numDeposits++;
    upToDate = false;
}

void Account::makeWithdrawals(Money m_withdrawal){
    withdrawals.push_back(m_withdrawal);
    numWithdrawals++;
    upToDate = false;
}

std::ostream& operator <<(std::ostream& os, const Account& acc){
    os << "Account Details" << std::endl;
    os << "--------------------------" << std::endl;
    os << "Current Balance: " << acc.balance << std::endl;
    os << "--------------------------" << std::endl;
    os << "Number of Deposits: " << acc.deposits.size() << std::endl;
    os << "--------------------------" << std::endl;
    for(int i = 0; i < acc.deposits.size(); i++){
        os << "(" << i+1 << ") ";
        os << acc.deposits.at(i) << std::endl;
    }
    os << "--------------------------" << std::endl;
    os << "Number of Withdrawals: " << acc.withdrawals.size() << std::endl;
    os << "--------------------------" << std::endl;
    for(int i = 0; i < acc.withdrawals.size(); i++){
        os << "(" << i+1 << ") ";
        os << acc.withdrawals.at(i) << std::endl;
    }
    return os;
}
