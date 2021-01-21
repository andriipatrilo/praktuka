#ifndef PHONE_H
#define PHONE_H
#include <iostream>
using namespace std;
class Phone
{
public:
	Phone();
	~Phone();
	Phone(int id, string familyname, string name, string fathersName,
		int customerNumber, int TimeOfCityCalls, int TimeofOutCityCalls);
	Phone(const Phone& other);
private:
	int id;
	string familyname;
	string name;
	string fathersName;
	int customerNumber;
	int TimeOfCityCalls;
	int TimeofOutCityCalls;
};
#endif // PHONE_H
