#pragma once
#include "Bank.h"

class Checking : public BankAccount
{
private:
	char AcctType;
public:
	Checking();
	void Display();
	void orderChecks();
	void DepositChecking(double DA);
	void withdrawChecking(double wc);

};