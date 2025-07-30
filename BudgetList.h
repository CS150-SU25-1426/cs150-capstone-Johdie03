
#ifndef BUDGETLIST_H
#define BUDGETLIST_H

#include "Budget.h"
#include <vector>

class BudgetList {
    private:
        vector<Budget> mAccounts;

    public:

    bool addAccount (Budget budget);
    bool removeAccount (int accNum);

    bool operator== (const BudgetList& other) const;
    friend ostream& operator<< (ostream& os, const BudgetList& budgetList);




};




#endif