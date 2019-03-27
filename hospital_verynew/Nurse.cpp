#include <iostream>
using namespace std;
#include <string>

#include "Nurse.h"
#include "Department.h"

Nurse::Nurse(int EmpolyeeID, char* Name, int ExperienceYears) : name(nullptr)
{
	setEmpolyeeID(EmpolyeeID);
	setName(Name);
	setExperienceYears(ExperienceYears);
}

Nurse::Nurse(const Nurse& other)
{
	setEmpolyeeID(other.empolyeeID);
	setName(other.name);
	setExperienceYears(other.experienceYears);
}



Nurse::~Nurse()
{
	delete[]name;
}


bool Nurse::setEmpolyeeID(int EmpolyeeID) {
	empolyeeID = EmpolyeeID;
	return true;
}


bool Nurse::setName(const char* Name)

{
	delete[]name;
	name = new char[strlen(Name) + 1];
	strcpy(name, Name);
	return true;
}



bool Nurse::setExperienceYears(int ExperienceYears)
{
	experienceYears = ExperienceYears;
	return true;
}
//
//bool Nurse::setDepartment(const Department& Department)
//{
//	department = Department;
//	return true;
//}
//Department Nurse::getDepartment() const
//{
//	return department;
//}

char * Nurse::getName()   const
{
	return name;
}

int Nurse::getEmpolyeeID()    const
{
	return empolyeeID;
}

int Nurse::getExperienceYears() const
{
	return experienceYears;
}
bool Nurse::setDepartment(Department * Department)
{
	department = Department;
	return true;
}


//
//#include <iostream>
//using namespace std;
//#include <string>
//
//#include "Nurse.h"
//
//Nurse::Nurse(int EmpolyeeID, char* name, int ExperienceYears, Department* Department) : name(nullptr), department(nullptr)
//{
//
//	setEmpolyeeID(empolyeeID);
//	setName(name);
//	//set(experienceYears = ExperienceYears;
//	department = Department;
//}
//
//Nurse::Nurse(const Nurse& other) 
//{
//
//	setEmpolyeeID(other.empolyeeID);
//	setName(other.name);
//	experienceYears = other.ExperienceYears;
//	department = other.Department;
//
//}
//
//Nurse::~Nurse()
//{
//	delete[]name;
//}
//
//
//bool Nurse::setEmpolyeeID(int EmpolyeeID) {
//	empolyeeID = EmpolyeeID;
//	return true;
//}
//
//
//bool Nurse::setName(const char* Name)
//
//{
//	delete[]name;
//	name = new char[strlen(Name) + 1];
//	strcpy(name, Name);
//	return true;
//}
//
//
//
//bool Nurse::setExperienceYears(int ExperienceYears)
//{
//	experienceYears = ExperienceYears;
//	return true;
//}
//
//bool Nurse::setDepartment(Department* Department)
//{
//	department = Department;
//	return true;
//}
//Department* Nurse::getDepartment() const
//{
//	return department;
//}
//
//char * Nurse::getName()   const
//{
//	return name;
//}
//
//int Nurse::getEmpolyeeID()    const
//{
//	return empolyeeID;
//}
//
//int Nurse::getExperienceYears() const
//{
//	return experienceYears;
//
//}
//
//Nurse::~Nurse()
//{
//	delete[] name;
//	delete[] department;
//
//}