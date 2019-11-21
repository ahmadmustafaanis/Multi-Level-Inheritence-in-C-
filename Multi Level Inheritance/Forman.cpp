#include "Forman.h"

void Forman::setter()
{
	Labour::setter();
	cout << "What is your Field of Work\n";
	cin.ignore();
	getline(cin, field_of_Work);
	cout << "What is your Pay\n";
	cin >> pay;
}

void Forman::getter() const
{
	Labour::getter();
	cout << "Field of Work of this labour is \t" << field_of_Work << endl << "Pay of this Labour(Forman) is \t" << pay << endl;
	cout << "-----------------------------------------------"<<endl;
}
