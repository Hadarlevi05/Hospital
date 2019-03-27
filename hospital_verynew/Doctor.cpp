#include <iostream>
using namespace std;
#include <string>

#include "Doctor.h"
#include "Department.h"

Doctor::Doctor(int empolyeeID, const char* name, const char* specialization) : name(nullptr), specialization(nullptr)
{
	setEmpolyeeID(empolyeeID);
	setName(name);
	setSpecialization(specialization);
}

Doctor::Doctor(const Doctor& other)
{
	setEmpolyeeID(other.empolyeeID);
	setName(other.name);
	setSpecialization(other.specialization);
	//setDepartment(*other.department);
}
Doctor::~Doctor()
{
	delete[]name;
	delete[]specialization;

}

bool Doctor::setEmpolyeeID(int EmpolyeeID)
{
	empolyeeID = EmpolyeeID;
	return true;

}
bool Doctor::setName(const char* Name)
{
	delete[]name;
	name = new char[strlen(Name) + 1];
	strcpy(name, Name);
	return true;
}
bool Doctor::setSpecialization(const char* Specialization)
{
	delete[]specialization;
	specialization = new char[strlen(Specialization) + 1];
	strcpy(specialization, Specialization);
	return true;
}
bool Doctor::setDepartment( Department* Department)
{
	department = Department;
	return true;

}

const char * Doctor::getName()   const
{
	return name;
}
int          Doctor::getEmpolyeeID()    const
{
	return empolyeeID;
}
char*        Doctor::getSpecialization() const
{
	return specialization;
}
Department*   Doctor::getDepartment() const
{
	return department;
}