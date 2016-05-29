//practice7_1.cpp

#include <iostream>
#include <cstring>
#include <cstdlib>
#include "BankTransaction.cpp"

using namespace std;
float BankTransaction::balance;

int main(int argc, char const *argv[])
{
	char response[256];
	string moreBankingBusiness;
	cout << "Do you want to do some banking? ";
	cin >> moreBankingBusiness;
	for (int i = 0; i < moreBankingBusiness.length(); i++){
		moreBankingBusiness[i] = toupper(moreBankingBusiness[i]);
	}
	while (moreBankingBusiness == "YES" || moreBankingBusiness == "Y"){
		cout << "What would you like to do? " << 
			"(1 = Deposit; 2 = Withdraw; 3 = Get Balance)";
		cin.ignore();
		cin.getline(response,256);

		if(strlen(response) == 0) {
			cout << "You must make a selection";
			return 1;
		}
		else
		if(atoi(response) < 1 || atoi(response) > 3){
			cout << response << " - is not valid banking funcrion";
			return 1;
		}
		if (atoi(response) == 1){
			BankTransaction transaction;
			transaction.MakeDeposit();
		}
		if (atoi(response) == 2){
			BankTransaction transaction;
			transaction.MakeWithdrawal();
		}
		if (atoi(response) == 3){
			BankTransaction transaction;
			transaction.GetBalance();
		}
		cout << "Do you have more banking business? ";
		cin >> moreBankingBusiness;
		for (int i = 0; i < moreBankingBusiness.length(); i++){
			moreBankingBusiness[i] = toupper(moreBankingBusiness[i]);
		}
	}

	cout << endl << endl << "Thanks for banking with us!";
	return 0;
}