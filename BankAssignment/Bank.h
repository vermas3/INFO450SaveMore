#pragma once
#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;

class BankAccount
{
protected:
	char *AcctType;
	double Balance;
	double IntRate;

public:
	virtual int DepoAmt(double DA);
	virtual int withdraw(double w);
	virtual void Display();
};

int BankAccount::DepoAmt(double DA)             //deposit function. cannot go below 0, It will give an error
{
	if (DA >= 0)
	{
		Balance += DA;
		return 0;
	}
	else
	{
		return -1;
	}
}

int BankAccount::withdraw(double w)             //Take money out
{
	if (Balance - w > 0)
	{
		Balance -= w;
		return 0;
	}
	else
	{
		return -1;
	}
}

void BankAccount::Display()
{
	cout << "Type of Account: " << AcctType << endl;
	cout << "Interest Rate: " << (IntRate * 100) << "%" << endl;
	cout << "Current Balance:" << Balance << endl;

}
