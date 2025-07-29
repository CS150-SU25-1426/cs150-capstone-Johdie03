#include <iostream>
#include "Budget.h"

using namespace std;

int main() {
    //BudgetList add list of accounts
    string name;
    int accNum;
    double income, expenses, targetSavings, currentSavings;

	int expensesCount=0;
	double indivExpense = 0.0;


    int choice = 0;
    do {
		cout << "************************************************************************\n";
		cout << "**                                                                    **\n";
		cout << "**                          WELCOME TO                                **\n";
		cout << "**                         BUDGETING APP                              **\n";
		cout << "**                                                                    **\n";
		cout << "************************************************************************\n";
		cout << "** Please make a choice from the following options:                   **\n";
		cout << "** 1)  Add a new Budgeting Account                                    **\n";
		cout << "** 2)  Remove a Budgeting Account                                     **\n";
		cout << "** 3)  Display all Accounts                                           **\n";
		cout << "** 4)  Exit                                                           **\n";
		cout << "************************************************************************\n";
		cout << ">> ";
		cin >> choice;
    
		cin.ignore(); 
        string hold;

		switch (choice){
		case 1: //ADD
		{ 
            cout << "Please enter your name: ";
            getline(cin, name);
            cout << "Enter your estimated income per month: ";
            cin >> income;
			cout << "How many expenses would you like to add? ";
			cin >> expensesCount;
			cin.ignore(); 

			for (int i = 0; i < expensesCount; ++i) {
				cout << "Enter expense " << (i + 1) << ": ";
				cin >> indivExpense;
				cin.ignore();

				expenses += indivExpense; 
			}

            cout << "Enter your target savings per month: ";
            cin >> targetSavings;
            cout << "Enter your current savings: ";
            cin >> currentSavings;

			





            Budget newBudget(name, income, expenses, targetSavings, currentSavings);
            //add new account to list


			cout << endl;
			break;
		}
		case 2: //REMOVE

			
			break;
		case 3://DISPLAY
			cout << "Displaying all accounts:\n";

			//TESTING
			// cout << "Name: " << name << "\n"
			//      << "Account Number: " << accNum << "\n"
			//      << "Income: $" << income << "\n"
			//      << "Expenses: $" << expenses << "\n"
			//      << "Target Savings: $" << targetSavings << "\n"
			//      << "Current Savings: $" << currentSavings << "\n";

			//display calculation
			//grab from list and display
			break;
		case 4:
			cout << "THANK YOU!\n";
			break;
		}

	} while (choice != 4);
	
  
	return EXIT_SUCCESS;

}