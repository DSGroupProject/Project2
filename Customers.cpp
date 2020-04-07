#include "Customers.h"

using namespace std;

void customer::setName(string fName, string lName)
{
	fName = firstName;
	lName = lastName;
}

void customer::setID(string ID)
{
	ID = id;
}

void customer::setCarInformation(string cNum, string cModel)
{
	cNum = carNumber; 
	cModel = carModel;
}

string customer::getName()
{
	return firstName + " " + lastName; 
}

string customer::getID()
{
	return id;
}

string customer::getCarInformation()
{
	return carNumber + " " + carModel;
}
