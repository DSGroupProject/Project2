#include<iostream>
#include<string>

using namespace std; 
#ifndef CUSTOMERS_H
#define CUSTOMERS_H

class customer
{
	public: 
		void setName(string, string);
		void setID(string);
		void setCarInformation(string, string);
		void print();
		string getName();
		string getID();
		string getCarInformation();
	protected:
		string firstName;
		string lastName; 
		string id;
		string carModel; 
		string carNumber;
};

#endif
