// BreakEven.cpp : This file contains the 'main' function. Program execution begins and ends there.
//https://docs.google.com/document/d/1-9t5KPQpW6fBKbdhmPBgDkc0TF3SZefb5MSHtIl6mtI/edit?usp=sharing

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <sstream>

using namespace std;

#include "OutFile.h"

int main()
{
	double income = 0;
	double taxRate = 0;
	double add = 0;
	double subtract = 0;
	double incomeTax = 0;
	string taxStatus = "";
	string file = "";
	string answer = "";
top:
	cout << "\nPlease enter your income to calculate your taxes\n " << endl;
	cin >> income;
	while (!(cin >> income)) //get input
	{
		if (isdigit(income))
		{
			break;
		}

		else
		{
			//if input fails, run this
			cin.clear();
			cin.sync();
			cout << "\nSorry, that was not a valid number. Please enter a valid number\n ";
		}
	}
	cin.ignore(80, '\n');

	int main()
	{
		if (income <= 9525)
		{
			taxRate = .1;
			subtract = 0;
			add = 0;
		}

		if (income >= 9526 & income <= 38700)
		{
			taxRate = .12;
			subtract = 9525;
			add = 25;
		}

		if (income >= 38701 & income <= 82500)
		{
			taxRate = .22;
			subtract = 38700;
			add = 85;
		}

		if (income > 4313)
		{
			taxRate = .075;
			subtract = 4313;
			add = 181;
		}
	}

	incomeTax = ((income - subtract) * taxRate) + add;

	cout << "\nYour taxable income is " << income << endl;

	}

	cout << "\nThat means your income tax will be " << incomeTax << endl;

	system("PAUSE");

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
