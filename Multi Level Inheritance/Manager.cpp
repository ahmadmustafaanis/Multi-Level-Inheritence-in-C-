#include "Manager.h"

void Manager::setter()
{
	Employee::setter();
	cout << "What is your Title Mr. Manager\n";
	cin >> title;
	cout << "What is your ClubDues\n";
	cin >> clubDues;
}

void Manager::getter() const
{
	Employee::getter();
	cout << "Your Title is \t" << title << "\n Club Dues are \t" << clubDues;
	cout << "-------------------------------------\n";
}
