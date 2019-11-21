#pragma once
#include "Employee.h"
class Labour :
	public Employee
{
protected:
	string shift;
	int noOfHours;
public:
	void setter();
	void getter() const;
};

