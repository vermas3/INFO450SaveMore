#pragma once
#include "Bank.h"

class Savings : public BankAccount
{
private:
	char AcctType;
public:
	Savings();
	void Display();
	void CompInt(bool condition);
	void DepositSavings(double DA);
	void WithdrawSavings(double ws);
};