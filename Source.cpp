// Sterling Gerard
// Date: April 3, 2022
// Objective: Write a program that has a MonthlyBudget structure designed to 
// hold each of these expense categories.  The program should pass the structure 
// to a function that asks the  user to enter the amount spent in each budget category
// during a month. 

#include<iostream>
#include<iomanip>
using namespace std;

//structure declaration
struct MonthlyBudget
{
	//variable declarations
	float housing;
	float utilities;
	float houseHold;
	float transport;
	float food;
	float medical;
	float insurance;
	float entertain;
	float cloth;
	float misc;
};

//function prototypes
void read(struct MonthlyBudget*);
void displayReport(struct MonthlyBudget*);

int main()
{
	//declare MonthlyBudget structure variable budget
	struct MonthlyBudget budget;
	//declare MonthlyBudget structure pointer variable ptr
	struct MonthlyBudget* ptr;
	ptr = &budget;
	read(ptr);
	displayReport(ptr);

	system("pause");
	return 0;
}
 //Function Defintions
void read(struct MonthlyBudget* ptr)
{
	
	cout << "Enter housing expense: ";
	cin >> ptr->housing;
	
	cout << "Enter utilities expense: ";
	cin >> ptr->utilities;
	
	cout << "Enter house hold expense: ";
	cin >> ptr->houseHold;
	
	cout << "Enter transport expense: ";
	cin >> ptr->transport;
	
	cout << "Enter food expense: ";
	cin >> ptr->food;
	
	cout << "Enter medical expense: ";
	cin >> ptr->medical;
	
	cout << "Enter insurance expense: ";
	cin >> ptr->insurance;
	
	cout << "Enter entertainment expense: ";
	cin >> ptr->entertain;
	
	cout << "Enter cloth expense: ";
	cin >> ptr->cloth;
	
	cout << "Enter miscellanious expense: ";
	cin >> ptr->misc;
}

void displayReport(struct MonthlyBudget* ptr)
{
	
	float total;
	//calculate total monthly expense
	total = ptr->housing + ptr->utilities + ptr->houseHold + ptr->transport + ptr->food + ptr->medical + ptr->insurance + ptr->entertain + ptr->cloth + ptr->misc;
	cout << "\nReport...." << endl;

	//display expense in each category.
	cout << setw(22) << left << "Housing " << "$ " << fixed << setprecision(2) << ptr->housing << endl;
	cout << setw(22) << left << "Utilities " << "$ " << fixed << setprecision(2) << ptr->utilities << endl;
	cout << setw(22) << left << "Household expense " << "$ " << fixed << setprecision(2) << ptr->houseHold << endl;
	cout << setw(22) << left << "Transportaion " << "$ " << fixed << setprecision(2) << ptr->transport << endl;
	cout << setw(22) << left << "Food " << "$ " << fixed << setprecision(2) << ptr->food << endl;
	cout << setw(22) << left << "Medical " << "$ " << fixed << setprecision(2) << ptr->medical << endl;
	cout << setw(22) << left << "Insurance " << "$ " << fixed << setprecision(2) << ptr->insurance << endl;
	cout << setw(22) << left << "Entertainment " << "$ " << fixed << setprecision(2) << ptr->entertain << endl;
	cout << setw(22) << left << "Clothing " << "$ " << fixed << setprecision(2) << ptr->cloth << endl;
	cout << setw(22) << left << "Miscellanious " << "$ " << fixed << setprecision(2) << ptr->misc << endl;
	//display total 
	cout << setw(22) << left << "Total amount" << "$ " << fixed << setprecision(2) << total << endl;
}