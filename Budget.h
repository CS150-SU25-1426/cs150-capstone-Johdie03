#include <iostream>
#include <string>

#ifndef BUDGET_H
#define BUDGET_H

using namespace std;

class Budget {
    private:
        string mName;
        int mAccNum;
        double mIncome;
        double mExpenses;
        double mTargetSavings;
        double mCurrentSavings;

    public:
        Budget(string name, double income= 0.0, double expenses= 0.0, double targetSavings= 0.0, double currentSavings = 0.0);

        int getAccNum() const { return mAccNum; }
        string getName() const {return mName; }
        double getIncome() const { return mIncome; }
        double getExpenses() const { return mExpenses; }
        double getTargetSavings() const { return mTargetSavings; }
        double getCurrentSavings() const { return mCurrentSavings; }

        void setName(string name) { mName = name; }
        void setIncome(double income) { mIncome = income; }
        void setExpenses(double expenses) { mExpenses = expenses; }
        void setTargetSavings(double targetSavings) { mTargetSavings = targetSavings; }
        void setCurrentSavings(double currentSavings) { mCurrentSavings = currentSavings; }

        bool operator== (const Budget& other) const;

        double calculatingMonthlySavings() const;

        friend ostream& operator<< (ostream& os, const Budget& s);

};

#endif