#include "Employee.h"
using namespace std;
void Employee::setter()
{
	cout << "What is your Name\n";
	cin.ignore(10, '\n');
	getline(cin, ename);
	cout << "What is your CNIC\n";
	cin >> cnic;
	cout << "What is your Employe Number \n";
	cin >> eno;
}

void Employee::getter() const
{
	cout << "-----------------Output---------------";
	cout << "Name is \t" << ename << endl << "CNIC # is \t" << cnic << endl << "Employee number is \t" << eno<<endl;
}
