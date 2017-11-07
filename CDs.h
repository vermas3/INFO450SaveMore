#pragma once
#include "Bank.h"

class CDs : public Bank
{
private:
	int term;
	char AcctType;
public:
	CDs();
	CDs(double bal, double inter, int term);
	//void Display();
	void compInt(bool condition);
	void depositCD(double DA, int termAmt);
	void withdrawCD(double wcd);

};