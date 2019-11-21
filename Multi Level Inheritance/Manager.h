#pragma once
#include "Employee.h"
class Manager :
	public Employee
{
protected:
	string title;
	float clubDues;
public:
	void setter();
	void getter() const;
};

