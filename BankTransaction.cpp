//BankTransaction.cpp

#include <iostream>
#include <string>

using namespace std;

class BankTransaction
{
	private:
		static float balance;
		float newBalance;
		float adjustmen;

	public:
		BankTransaction(){
			cout << "BankTransaction's Constructor" << endl;
		}
		~BankTransaction(){
			cout << "BankTransaction's Destructor" << endl;
		}
	public: void MakeDeposit(){
		cout << "Enter the Deposit Amount: ";
		cin >> adjustmen;
		newBalance = balance + adjustmen;
		cout << endl << endl <<
			"*** SMILEY NATIONAL BANK ***" << endl << endl;
		cout << "Old balance: " << balance << endl;
		cout << "Adjustmen is: " << adjustmen << endl;
		cout << "New balance: " << newBalance << endl << endl;
		balance = newBalance;
	}
	public: void MakeWithdrawal(){
		cout << "Enter the Withdrawal Amount: ";
		cin >> adjustmen;
		newBalance = balance - adjustmen;
		cout << endl << endl <<
			"*** SMILEY NATIONAL BANK ***" << endl << endl;
		cout << "Old balance: " << balance << endl;
		cout << "Adjustmen is: " << adjustmen << endl;
		cout << "New balance: " << newBalance << endl << endl;
		balance = newBalance;
	}
	public: void GetBalance(){
		cout << endl << endl <<
			"*** SMILEY NATIONAL BANK ***" << endl << endl;
		cout << "Your current Balance is: " << balance << endl << endl;

	}
};