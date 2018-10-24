#include <string>
#include "employee.h"
#include<iomanip>
using namespace std;

   employee::employee(){
	string name = "";
	string address = "";
	string phone = "";
   }
   employee::employee(string name, string address, string phone, int employeeNumber, double hourlyWage, double hoursWorked){
      this->name = name;
      this->address = address;
      this->phone = phone;
      this->employeeNumber = employeeNumber;
      this->hourlyWage = hourlyWage;
      this->hoursWorked = hoursWorked;
   }
      
double employee::calcPay(double pay, double payWT) {
   if ((hoursWorked - 40) > 0) {
      payWT = (40 * hourlyWage) + ((hoursWorked - 40) * (hourlyWage * 1.5));
      pay = (payWT - (payWT * 0.20) - (payWT *0.075));
   }
   else {
      payWT = hourlyWage * hoursWorked;
      pay = (payWT - (payWT * 0.20) - (payWT *0.075));
   }
   return pay;
}

void employee::printCheck() {
   double pay = calcPay(hourlyWage, hoursWorked);
   cout << "Employee Name: " << name << endl;
   cout << "Employee Number: " << employeeNumber << endl;
   cout << "Address: " << address << endl;
   cout << "Phone: " << phone << endl;
   cout << " ....................UVU Computer Science Dept................................." << endl;
   cout << "Pay to the order of " << name << "....................................$" <<fixed<<setprecision(2)<< pay << endl; 
   cout << "United Community Credit Union" << endl;
   cout << ".............................................................................." << endl;
   cout << "Hours worked: " << hoursWorked << endl; //
   cout << "Hourly wage: " << hourlyWage << endl; //
   
   
   }


    
       
   
