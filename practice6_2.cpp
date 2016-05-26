//practice6_2.cpp

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

void makeDeposit();
void makeWithdrawal();
void getBalance();

float balance = 0;
float newBalance = 0;
float adjustment = 0;

int main()
{
	
	char response[256];
	string moreBankingBusiness;

	cout << "Do you want to do some banking? ";
	cin >> moreBankingBusiness;

	for (int i = 0; i < moreBankingBusiness.length(); i++){
		moreBankingBusiness[i] = toupper(moreBankingBusiness[i]);
	}

	while(moreBankingBusiness == "YES" || moreBankingBusiness == "Y"){
		cout << "What would you like to do? " <<
			"(1 = Deposit; 2 = withdraw; 3 = Get balance): ";
		cin.ignore();
		cin.getline(response, 256);
		if (strlen(response) == 0){
			cout << "You must make a selection";
			return 1;
		}
		else if (atoi(response) < 1 || atoi(response) > 3){
			cout << response << " -- is a not valid banking function." << endl ;
			return 1;
		}
		// 1 -- deposit
		if(atoi(response) == 1){
			makeDeposit();
		}
		// 2 -- withdraw 
		if(atoi(response) == 2){
			makeWithdrawal();
		} 

		// 3 -- Get balance
		if(atoi(response) == 3){
			getBalance();
		}

		balance = newBalance;
		cout << "Do you have more banking business? ";
		cin >> moreBankingBusiness;
		
		for (int i = 0; i < moreBankingBusiness.length(); i++){
		moreBankingBusiness[i] = toupper(moreBankingBusiness[i]);
		} 

	} //The end while

	cout << endl << endl <<"Thanks for banking with us!";
	return 0;
}	

void makeDeposit(){
	cout << "Enter the Deposit Amount: ";
	cin >> adjustment;
	newBalance = balance + adjustment;
	cout << endl << endl <<
		"*** SMILEY NATIONAL BANK ***" <<
	endl << endl;
	cout << "Old balance is " << balance << endl;
	cout << "Ajustment is " << adjustment << endl;
	cout << "New balance is " << newBalance << endl << endl;
}
void makeWithdrawal(){
	cout << "Enter the Deposit Amount: ";
	cin >> adjustment;
	newBalance = balance - adjustment;
	cout << endl << endl <<
		"*** SMILEY NATIONAL BANK ***" <<
		endl << endl;
	cout << "Old balance is " << balance << endl;
	cout << "Ajustment is " << adjustment << endl;
	cout << "New balance is " << newBalance << endl << endl;
}

void getBalance(){
	cout << endl << endl <<
		"*** SMILEY NATIONAL BANK ***" <<
		endl << endl;
	cout << "You current balance is " << newBalance << endl << endl;
}