#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include "Checking.h"


using namespace std;


//class Checking : public BankAccount

	//if checking balance go below $500, $5.00 is deducted from the balance
	//No interest
	//ordering checks will cost you $15

	Checking::Checking() : Bank() //constructor
	{
	}

	Checking::Checking(double bal) : Bank(bal, 0)
	{
	}

	void Checking::orderChecks()
	{
		Balance -= 15.00;
		cout << "Order check is taking  -$15.00 from your Account, Sorry rules are rules." << endl;
		cout << " Balance:" << Balance << endl;

	}
	void Checking::DepositChecking(double DA)
	{
		int condition;
		condition = Bank::DepoAmt(DA);
		if (condition == 0)
		{
			if (Balance < 500)
			{
				Balance -= 5;
			}
		}
		else
		{
			cout << "Sorry, The value cannot be 0 :( " << endl;
		}
	}
	void Checking::withdrawChecking(double wc)
	{
		int condition;
		condition = Bank::withdraw(wc);
		if (condition == 0)
		{
			if (Balance < 500)
			{
				Balance -= 5;
			}
		}
		else
		{
			cout << "Sorry, you do not have enough money !" << endl;
		}
	}
	