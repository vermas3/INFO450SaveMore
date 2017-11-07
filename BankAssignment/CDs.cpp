#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include "Bank.h"
#include "CDs.h"

using namespace std;



class CDs : public BankAccount
{
	//10% rate with 5 or more year term and 5% rate for less than 5 year term
	//10% fee if take your money out before maturity
	int term;
public:
	CDs(int termAmt)
	{
		AcctType = "CDs";
		term = termAmt;
	}

	void compInt(bool condition)
	{
		if (condition == true)
		{
			Balance = Balance + ((IntRate / 12)* Balance);
		}
	}
	void depositCD(double DA, int termAmt)
	{
		int condition;
		condition = BankAccount::DepoAmt(DA);
		if (condition == 0)
		{
			term = termAmt;
			if (term <= 5)
			{
				IntRate = 0.05;
			}
			else
			{
				IntRate = 0.10;
			}
		}

	}
	void withdrawCD(double wcd)
	{

		int condition;
		//when you take it out before maturity, 10 %
		Balance = Balance - (Balance * 0.10);

		condition = BankAccount::withdraw(wcd);
		if (term <= 5)
		{
			IntRate = 0.05;
		}
		else
		{
			IntRate = 0.10;
		}
	}
};