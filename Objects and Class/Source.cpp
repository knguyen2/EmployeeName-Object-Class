/*
Write a class Employee that has as private member variables: first name, last name, type (hourly, exempt) & compensation.
Member functions should allow the user to enter this information and display it.  
Write a main() function that allows the user to enter data for 3 employees and display it.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

/*
enumerator type - similar to declaring and initializing const variables. 
HOWEVER, unlike const, emum shows relationship of the same type between the variables. 
*/
enum{SALARIED, PARTIME, INTERN };


//Employee Class Declaration 
class Employee
{
private:
	char firstName[50];
	char lastName[50];
	//declaring varibles and their data types
	int type;
	double compensation;
public:
	//constructor 
	Employee(); //defaut constructor
	//method to return success or fail value
	int getEmployeeName();
	//method return nothing and pass data types inside the parameters
	void setType(int newType);
	void setCompensation(double comp);
	void showEmployee();
	//destructor 
	~Employee();


};


//Initialize another constructor outside the scope using scope resulution operator ::
Employee::Employee()
{
	//initialize private variabels using 2 diffrents to achieve the same goal
	strcpy(firstName, " ");
	lastName[0] = '\0';
	//initialize type
	type = SALARIED;
	compensation = 0;
}


//mehtod ask user to enter the employee name
int Employee::getEmployeeName()
{
	cout << "\n Enter your first name: ";
	cin.getline(firstName, 50);
	cout << "\n Enter your last name: ";
	cin.getline(lastName, 50);
	return 0;
}

Employee::~Employee()
{
	cout << "\n In destructor " << endl;
}

//method for setType of salaries return nothing
void Employee::setType(int t)
{
	type = t;
}

//method for seting compensation
void Employee::setCompensation(double comp)
{
	compensation = comp;
}


//method to show Employee first &  last name
void Employee::showEmployee()
{
	cout << "\n Employee Name: " << firstName << " " << lastName << endl;
	cout << "\n Type: " << type << endl;
	cout << "\n Compensation: " << compensation << endl;
	cout << endl;
}


int main()
{

	//Creaing object and call the methods
	Employee emp1;
	//Employee emplist[3]; //array of employees -> will start next class 

	emp1.getEmployeeName();
	emp1.setType(INTERN);
	emp1.setCompensation(25000.00);
	emp1.showEmployee();



	system("pause");
	return 0;

}