#pragma once
#ifndef BANK_H
#define BANK_H
#include "stdafx.h"
#include <stdio.h>
#include <iostream>


using namespace std;

class Bank
{
protected:
	double Balance;
	double IntRate;

public:
	//Bank();
	//Bank(double bal, double intrate);
	//virtual int DepoAmt(double DA);
	//virtual int withdraw(double w);
//	virtual void Display();


Bank() //contructor
{
	Balance = 0;
	IntRate = 0;
}

Bank(double bal)
{
	Balance = bal;
}

Bank(double bal, int inter)
{
	IntRate = inter;
}

int DepoAmt(double DA)             //deposit function. cannot go below 0, It will give an error
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

int withdraw(double w)             //Take money out
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

void Display()
{
	cout << "Interest Rate: " << (IntRate * 100) << "%" << endl;
	cout << "Current Balance:" << Balance << endl;

}
};
#endif