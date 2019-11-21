#pragma once
#include "Employee.h"
class Scientist :
	public Employee
{
protected:
	int noOfPublications;
	string field;
public:
	void setter();
	void getter() const;
};

