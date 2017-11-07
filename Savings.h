#pragma once
#include "Bank.h"

class Savings : public Bank
{
private:
	char AcctType;
public:
	Savings();
	Savings(double bal, double inter);
	//void Display();
	void CompInt(bool condition);
	void DepositSavings(double DA);
	void WithdrawSavings(double ws);
};