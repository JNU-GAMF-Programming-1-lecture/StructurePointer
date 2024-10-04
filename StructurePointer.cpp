/*
 * StructurePointer.cpp
 * 
 * Demonstrates the usage of structure type pointers and the parameter passing by pointer.
 * 
 */
#include <iostream>
#include <iomanip>

using namespace std;

struct Student
{
	string FMName;
	string LastName;
	string Neptun;
	int Credits;
};

// Declaration of the function.
void DisplayStudentData(Student*);

int main()
{
	Student st = { "John Bill","Smith","CFTSYX",130 };
	DisplayStudentData(&st);
	return 0;
}

// Definition of the function.
void DisplayStudentData(Student* stp)
{
	cout << endl;
	// Access the struct using the -> member selector operator.
	cout << setw(24) << left <<"First and middle name: " << stp->FMName << endl;
	cout << setw(24) << "Last name: " << stp->LastName << endl;
	cout << setw(24) << "Neptun code: " << stp->Neptun << endl;
	cout << setw(24) << "Credits: " << stp->Credits<< endl;
}