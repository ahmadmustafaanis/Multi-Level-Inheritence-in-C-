#include "Scientist.h"

void Scientist::setter()
{
	Employee::setter();
	cout << "\n WHat is your Field\n";
	cin.ignore();
	getline(cin, field);
	cout << "What is Your Number of Publications\n";
	cin >> noOfPublications;
}

void Scientist::getter() const
{
	Employee::getter();
	cout << "Field Of Scientist is \t" << field << "\nNO of publications is\t" << noOfPublications;
	cout << "-------------------------------------\n";
}
