#include "Phone.h"
#include <iostream>
using namespace std;
Phone::Phone() {}
Phone::~Phone() {}
Phone::Phone(int id, string familyname, string name, string
	fathersName,
	int customerNumber, int TimeOfCityCalls, int TimeofOutCityCalls);
Phone(const Phone& other);
{
	this->id = id;
	this->familyname = familyname;
	this->name = name;
	this->fathersName = fathersName;
	this->customerNumber = customerNumber;
	this->TimeOfCityCalls = TimeOfCityCalls;
	this->TimeofOutCityCalls = TimeofOutCityCalls;
}
Phone::Phone(const Phone& other)
{
	this->id = other.id;
	this->familyname = other.familyname
		this->name = other.name;
	this->fathersName = other.fathersName;
	this->customerNumber = other.customerNumber;
	this->TimeOfCityCalls = other.TimeOfCityCalls;
	this->TimeofOutCityCalls = other.TimeofOutCityCalls;
}