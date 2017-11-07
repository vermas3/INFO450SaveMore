#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include "CDs.h"

using namespace std;


CDs::CDs() : Bank() //constructor
{
	term = 0;
}

CDs::CDs(double bal, double inter, int term) : Bank(bal, inter)
{
	term = term;
}


//10% rate with 5 or more year term and 5% rate for less than 5 year term
//10% fee if take your money out before maturity

	void CDs::compInt(bool condition)
	{
		if (condition == true)
		{
			Balance = Balance + ((IntRate / 12)* Balance);
		}
	}
	void CDs::depositCD(double DA, int termAmt)
	{
		int condition;
		condition = Bank::DepoAmt(DA);
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
	void CDs::withdrawCD(double wcd)
	{

		int condition;
		//when you take it out before maturity, 10 %
		Balance = Balance - (Balance * 0.10);

		condition = Bank::withdraw(wcd);
		if (term <= 5)
		{
			IntRate = 0.05;
		}
		else
		{
			IntRate = 0.10;
		}
	}