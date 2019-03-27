#include <iostream>
using namespace std;
#include <string>

#include "Patient.h"
//Patient::Patient(int ID, const char* name, Gender gender, Department* currentDepartment)

Patient::Patient(int ID, const char* name, Gender gender)
{
	setID(ID);
	setName(name);
}

bool Patient::setName(const char* Name)
{
	delete[]name;
	name = new char[strlen(Name) + 1];
	strcpy(name, Name);
	return true;

}

bool Patient::setID(int Id)
{
	ID = Id;
	return true;
}

bool Patient::setBirthDate(DateTime birthDate)
{
	BirthDate = birthDate;
	return true;

}

bool Patient::setGender(Gender Gender)
{
	gender = Gender;
	return true;

}

bool Patient::addDepartment(Department* CurrentDepartment)
{
	currentDepartment = CurrentDepartment;
	return true;
}

char* Patient::getName()const
{
	return name;
}

int Patient::getID()const
{
	return ID;
}

DateTime Patient::getBirthDate()const
{
	return BirthDate;
}

Patient::Gender Patient::getGender()const
{
	return gender;
}

Department* Patient::getCurrentDepartment() const
{
	return currentDepartment;
}

int Patient::getNumOfVisitationForms() const
{
	return numOfVisitationForms;
}

void Patient::addNewVisitation(Visitation_Form& visitation)
{
	visitations = new Visitation_Form*[numOfVisitationForms];
	visitations[numOfVisitationForms] = &visitation;
	numOfVisitationForms++;

}

Patient::~Patient()
{

	delete[]name;
	// ? delete[]currentDepartment;
	for (int i = 0; i < numOfVisitationForms; i++)
		delete visitations[i];
	delete[]visitations;



}