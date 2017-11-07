#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include "Savings.h"



using namespace std;




	//balance under $10,000 earns 1% APR and balance over and equal to $10,000 earns 2% APR
	//If you take money out from saving ,  a fee of $2, is charged


Savings::Savings() : Bank() //constructor
{
}

Savings::Savings(double bal, double inter) : Bank(bal, inter)
{
}

	void Savings::CompInt(bool condition)
	{
		if (Balance >= 10000)
		{
			IntRate = 0.02;
		}
		else
		{
			IntRate = 0.01;
		}

		if (condition == true)
		{
			Balance += (Balance * (IntRate / 12));
		}
	}
	void Savings::DepositSavings(double DA)
	{
		int condition;
		condition = Bank::DepoAmt(DA);
		if (condition == 0)
		{
			if (Balance >= 10000)
			{
				IntRate = 0.02;
			}
			else
			{
				IntRate = 0.01;
			}
		}
		else
		{
			cout << "Sorry, The value cannot be 0. :( " << endl;
		}

	}
	void Savings::WithdrawSavings(double ws)
	{
		int condition;
		condition = Bank::withdraw(ws);
		if (condition == 0)
		{
			Balance -= 2;                                   // charged fee ($2)
			if (Balance >= 10000)
			{
				IntRate = 0.02;
			}
			else
			{
				IntRate = 0.01;
			}
		}
		else
		{
			cout << "Sorry, you do not have enough money :( " << endl;
			Balance += ws;
		}
	}