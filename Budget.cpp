#include "Budget.h"

Budget::Budget(string name, double income, double expenses, double targetSavings, double currentSavaings){
    static int lastAccNum = 0;
    mAccNum = ++lastAccNum;

    mName = name;
    mIncome = income;
    mExpenses = expenses;
    mTargetSavings = targetSavings;
    mCurrentSavings = currentSavaings;

}

bool Budget::operator== (const Budget& other) const {
    return mName == other.mName && mAccNum == other.mAccNum &&
           mIncome == other.mIncome && mExpenses == other.mExpenses &&
           mTargetSavings == other.mTargetSavings && mCurrentSavings == other.mCurrentSavings;
}

ostream& operator<<(ostream& os, const Budget& budget) {
    os << "Name: " << budget.mName << "\n"
       << "Account Number: " << budget.mAccNum << "\n"
       << "Income: $" << budget.mIncome << "\n"
       << "Expenses: $" << budget.mExpenses << "\n"
       << "Target Savings: $" << budget.mTargetSavings << "\n"
       << "Current Savings: $" << budget.mCurrentSavings;
    return os;
}

double Budget::calculatingMonthlySavings() const {
    double monthlyNeeded = mTargetSavings - mCurrentSavings;
    return (monthlyNeeded > 0) ? monthlyNeeded : 0.0; 
    

}


