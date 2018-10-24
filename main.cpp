#include "employee.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
	employee object1("Joe Brown",  "123 Main St.", "123-6788", 37, 10, 45 );
	employee object2("Sam Jones", "45 East State", "661-9000", 37, 12.50 , 30);

   object1.printCheck();
   object2.printCheck();
   
	cin.ignore();
	cin.get();
	return 0;
}
