#include "Labour.h"

void Labour::setter()
{
	Employee::setter();
	cout << "What is your Shift (Morning or Evening)\n";
	cin.ignore();
	getline(cin, shift);
	cout << "What is No of Hours you worked\n";
	cin >> noOfHours;
}

void Labour::getter() const
{
	Employee::getter();
	cout << "Shift of Labour is \t" << shift << endl << "No of Hours Wroked by Labour is \t" << noOfHours << endl;
	cout << "--------------------------------------"<<endl;
}
