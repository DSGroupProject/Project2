#include <iostream>
#include "Customers.h"
#include <fstream>
#include <iomanip>
#include <stack>
#include <sstream>

using namespace std; 

int menu()
{

    int choice;
    cout <<"\t\tChoose from the option below\n"
         <<"\t\t=========\n"
         <<"\t\t1. Request Service\n"
         <<"\t\t2. Print()\n"
         <<"\t\t3. View Repair Status\n"
         <<"\t\t4. View Invoice\n"
         <<"\t\t5. Make Payment\n"
		 <<"\t\t6. EXIT\n";
    cin >>choice;
    return choice;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	
	int choice;
	string choices;
	string fName;
	string lName; 
	string Id;
	string carNumber; 
	string carModel;
	customer custom;
	ofstream Customer; 
	stack <string> customer;
	do{
		choice = menu();
		switch(choice)
		{
			case 1: 
				Customer.open("CustomerInfo.txt", ios_base::app);
					cout << "Enter first name and last name: \n";
					cin >> fName;
					customer.push(fName);
					cin >> lName;
					customer.push(lName);
					custom.setName(fName, lName);
					cout << "Enter the id: \n"; 
					cin >> Id; 
					customer.push(Id);
					custom.setID(Id);
					cout << "Enter your car number and model: \n";
					cin >> carNumber;
					customer.push(carNumber);
					cin >> carModel;
					customer.push(carModel); 
					custom.setCarInformation(carNumber, carModel);
					cout << "We offer: \n"
						<<	"ST150- Service Technician: $150/hour\n"
						<<	"DT80- Diagnostic technician: $80/hour\n"
						<<	"BTT215- Brake and transmission technician: $215/hour"
						<<	"BRT34- Body repair technician: $34/hour\n"
						<<	"VF215- Vehicle refinisher: $215/hour\n"
						<<	"VI13- Vehicle inspector: $13/hour\n";
					cin >> choices;
					customer.push(choices);
					Customer << "\n First name: \n" << fName << "\n Last name: \n" << lName << "\n Id: \n" << Id << "\n Car Model: \n" << carModel << "\n Car Number: \n" << carNumber << "\n Technician: \n" << choices << endl;
				Customer.close(); 
			break;
			
			case 2:
			{	
				char printFile; 
				ifstream Customer;
				Customer.open("CustomerInfo.txt", ios::in); 
				if (!Customer){
					cout << "Unable to open file";
					exit(1);
				}
				
				while (!Customer.eof())
				{
					Customer >> noskipws >> printFile; 
					cout << printFile;
				}
				
				Customer.close();
			}
			break; 
			
			case 3:
			break; 
			
			case 4: 
			break; 
			
			case 5:
			break;
			
			case 6: 
			break; 
		}
	}while(choice != 6);
	
	
	
	return 0;
}
