#include "employee.h"
#include "Manager.h"
#include "Labour.h"
#include "Scientist.h"
#include "Forman.h"
int main()
{
	Employee e1;
	Manager m1;
	Labour l1;
	Scientist s1;
	Forman f1;
	int choice;
	do {
		cout << "Type 1 to Enter Simple Employee\n2 to enter Manager\n3 to enter Labour\n4 to Enter Scientist\n5 to Enter Forman\n6 to End";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			system("color F3");
			e1.setter();
			cout << "_____________Employee DATA IS______________________\n";
			e1.getter();
			break;
		case 2:
			system("cls");
			system("color B3");
			m1.setter();
			cout << "_____________Manager DATA IS______________________\n";
			m1.getter();
			break;
		case 3:
			system("cls");
			system("color 6F");
			l1.setter();
			cout << "_____________Labour DATA IS______________________\n";
			l1.getter();
			break;
		case 4:
			system("cls");
			system("color 7F");
			s1.setter();
			cout << "_____________Scientist DATA IS______________________\n";
			s1.getter();
			break;
		case 5:
			system("cls");
			system("color 3A");
			f1.setter();
			cout << "_____________FORMAN DATA IS______________________\n";
			f1.getter();
		default:
			break;
		}
	}while(choice != 6);
}