#pragma once
#include "Labour.h"
class Forman :
	public Labour
{
protected:
	string field_of_Work;
	float pay;
public:
	void setter();
	void getter() const;
};

