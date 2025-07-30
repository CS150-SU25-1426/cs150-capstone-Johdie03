#include "Budget.h"

Budget::Budget(string name, double income, double expenses, double targetSavings, double currentSavings){
    static int lastAccNum = 0;
    mAccNum = ++lastAccNum;

    mName = name;
    mIncome = income;
    mExpenses = expenses;
    mTargetSavings = targetSavings;
    mCurrentSavings = currentSavings;

}

bool Budget::operator== (const Budget& other) const {
    return mName == other.mName && mAccNum == other.mAccNum &&
           mIncome == other.mIncome && mExpenses == other.mExpenses &&
           mTargetSavings == other.mTargetSavings && mCurrentSavings == other.mCurrentSavings;
}

ostream& operator<<(ostream& os, const Budget& s) {
    os << "[Name: " << s.mName << "\n"
       << "Account Number: " << s.mAccNum << "\n"
       << "Income: $" << s.mIncome << "\n"
       << "Expenses: $" << s.mExpenses << "\n"
       << "Target Savings: $" << s.mTargetSavings << "\n"
       << "Current Savings: $" << s.mCurrentSavings << "]" << endl;
    return os;
}

double Budget::calculatingMonthlySavings() const {
    double monthlyNeeded = mTargetSavings - mCurrentSavings;
    return (monthlyNeeded > 0) ? monthlyNeeded : 0.0; 
    

}


