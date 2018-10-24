#include <sstream>
#include <iostream>
#include <string>
using namespace std;

class employee
{
private:
	string name;
	string address;
	string phone;
	int employeeNumber;
	double hourlyWage;
	double hoursWorked;
public:
	employee ();
	employee(string name, string address, string phone, int employeeNumber, double hourlyWage, double hoursWorked);
	double calcPay(double,double);
	void printCheck();
	
};
