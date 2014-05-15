/*
Author: Jesse Rock
Date: 5/15/14
Filename: counterForAdam.cpp
Purpose: grab a given integer, count to this integer, print
biz everytime you reach a number that can be dividedby 7 
and buz everytime you hit a number that can be divided by 12.
*/

#include<iostream>

using namespace std;

int main()
{
	int valueOne;

	cout << "Please enter an integer you would like to count to: ";
	cin >> valueOne;

	for(int count = 1; count <= valueOne; count++)
	{
		int biz = count % 7;
		int buz = count % 12;

		if(biz == 0)
		{
			cout << "BIZ" << endl;
		}
		else if(buz ==  0)
		{
			cout << "BUZ" << endl;
		}
		else
		{
			cout << "Not able to divide by 7 or 12." << endl;		
		}
	}

	return 0;
}

/*
Output:

Please enter an integer you would like to count to: 14
BIZ
BUZ
BIZ
Press any key to continue . . .
*/