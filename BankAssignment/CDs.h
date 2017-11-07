#pragma once
#include "Bank.h"

class CDs : public BankAccount
{
private:
	int term;
	char AcctType;
public:
	CDs();
	void Display();
	void compInt(bool condition);
	void depositCD(double DA, int termAmt);
	void withdrawCD(double wcd);

};