// BankAssignment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include "Bank.h"
#include "CDs.h"
#include "Checking.h"
#include "Savings.h"

using namespace std;

int main()
{
	//variable declarations
	int AcctNum;
	int DepoChecking;
	int DepoSaving;
	int CD;
	int DepoCDs;
	char CompInt;
	int WithCheck;
	int WithSave;
	int WithCDs;

	cout << "Enter your Account Number please: " << endl;
	cin >> AcctNum;

	//Savings Account
	Savings mySave;
	cout << "Enter the amount you want to put into you Savings Account?" << endl;
	cin >> DepoSaving;
	mySave.DepositSavings(DepoSaving);

	//Checkings account
	Checking myCheck;
	cout << "Enter the amount you want to put into you Checking Account?" << endl;
	cin >> DepoChecking;
	myCheck.DepositChecking(DepoChecking);

	//for CD
	CDs myCD;
	cout << "How long is you CD in years?" << endl;
	cin >> CD;
	cout << "Enter the amount you want to put into you CD ?" << endl;
	cin >> DepoCDs;
	myCD.depositCD(CD, DepoCDs);

	//Display attributes for Each Account
	cout << "***" << endl;
	cout << "Account Summary" << endl;
	cout << "Account Number: " << AcctNum << endl;
	mySave.Display();
	myCheck.Display();
	myCD.Display();
	cout << "***" << endl;

	//Calculates monthly interest . I don't know why i did it. i saw this function so i made it work.
	mySave.CompInt(true);
	myCD.compInt(true);

	cout << "***" << endl;
	cout << "After Compounding A Month of Interest" << endl;
	mySave.Display();
	myCD.Display();
	cout << "***" << endl;

	//Lets order Checks
	myCheck.orderChecks();

	//Withdraw from Checking and Savings
	cout << "Enter the amount you want to withdraw from your Checking Account?" << endl;
	cin >> WithCheck;
	myCheck.withdrawChecking(WithCheck);
	cout << "Enter the amount you want to withdraw from your Savings Account? ($2 fee for withdrawals)" << endl;
	cin >> WithSave;
	mySave.WithdrawSavings(WithSave);

	//withdrawal for CD
	cout << "Enter the amount you want to withdraw from your CD Account? (10% fee on pre-withdrawal balance)" << endl;
	cin >> WithCDs;
	myCD.withdrawCD(WithCDs);

	cout << "****" << endl;
	cout << "Summary" << endl;
	cout << "Account Number: " << AcctNum << endl;
	mySave.Display();
	myCheck.Display();
	myCD.Display();
	cout << " Thank you, i hope you like it, it took me ages to do it. Programming is not my stuff. :)))) " << endl;

	return 0;
}