#pragma once
#include "Bank.h"

class Checking : public Bank
{
private:
	char AcctType;
public:
	Checking();
	Checking(double bal);
	//void Display();
	void orderChecks();
	void DepositChecking(double DA);
	void withdrawChecking(double wc);

};