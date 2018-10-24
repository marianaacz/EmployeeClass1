/* MARIANA ACOSTA 
PROJECT 4: Object and Classes: Employee Class 
FEB 20, 2018 
IT WAS DONE 100% BY ME 
*/

#include "employee.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
   //string name, string address, string phone, int employeeNumber, double hourlyWage, double hoursWorke
	employee object1("Joe Brown",  "123 Main St.", "123-6788", 37, 10, 45 );
	employee object2("Sam Jones", "45 East State", "661-9000", 37, 12.50 , 30);
	

	//cout<< object1.employee() << endl;
	//cout<< object2.employee() << endl;

   object1.printCheck();
   object2.printCheck();
   
	cin.ignore();
	cin.get();
	return 0;
}
