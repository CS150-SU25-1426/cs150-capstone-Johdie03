#include "BudgetList.h"

bool BudgetList::addAccount(Budget budget) {
    for (const auto& acc : mAccounts) {
        if (acc == budget) {
            return false; 
        }
    }
    mAccounts.push_back(budget);
    return true; 
}



bool BudgetList::removeAccount(int accNum) {
    int index = -1;

    for (int i =0; i<mAccounts.size(); i++){
        if(mAccounts[i].getAccNum() == accNum){
            index = i;
        }
            
    }

    if (index >=0){
        mAccounts.erase(mAccounts.begin() + index);
        return true;
    }

    return false;

}

bool BudgetList::operator==(const BudgetList& other) const{

    return mAccounts == other.mAccounts;
}

ostream& operator<<(ostream& os, const BudgetList& s){
    for (int i=0; i < s.mAccounts.size(); i++){
        os << s.mAccounts[i] << "\n";
    }

    return os;
}