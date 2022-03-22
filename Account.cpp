#include "Account.h"

Account::Account(Money money){
    Money instance;
    balance = instance;
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
    std::string info;
    std::vector<std::string> infoV;

    for(int i = 0; i < acc.deposits.size(); i++){
        std::stringstream ssNumDeposits;
        ssNumDeposits << i+1;
        std::string strNumDeposits;
        ssNumDeposits >> strNumDeposits;

        std::stringstream ssDeposits;
        ssDeposits << acc.deposits.at(i);
        std::string strDeposits;
        ssDeposits >> strDeposits;

        std::string info =  "(" + strNumDeposits + ")" + strDeposits;
        infoV.push_back(info);
    }

    for(int i = 0; i < acc.deposits.size(); i++){
        std::string info = infoV.at(i);
    }

    if(!acc.upToDate){

    }

    os << "Account Details";
    os << "\n--------------------------";
    os << "\nCurrent Balance:" << acc.balance;
    os << "\n--------------------------";
    os << "\nNumber of Deposits: " << acc.deposits.size();
    os << "\n--------------------------\n";
    os << info;
    os << "\n--------------------------";
    os << "\nNumber of Withdrawals: " << acc.withdrawals.size();
    os << "\n--------------------------\n";
    return os;
}