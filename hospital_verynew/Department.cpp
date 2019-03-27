#include <iostream>
using namespace std;

#include "Department.h"


Department::Department(const char* name, Patient ** patients,int numOfPatients) : name(nullptr), patients(patients)
{
	patients = new Patient*[100];
	setName(name);
	setNumOfPatients(numOfPatients);
}


bool Department::setName(const char* Name)
{
	delete[]name;
	name = new char[strlen(Name) + 1];
	strcpy(name, Name);
	return true;
}

bool Department::setNumOfPatients(int NumOfPatients)
{
	numOfPatients = NumOfPatients;
	return true;
}
const char* Department::getName(const char* name) const
{
	return name;
}

int Department::getNumOfPatients() const
{
	return numOfPatients;
}

Department::~Department()
{
	delete[]name;
}

Patient** Department::getAllPatiants () const
{
	return patients;
}


bool Department::addPatient(Patient& patient)
{

	patients[numOfPatients] = &patient;
	numOfPatients++;
	return true;
}
