#ifndef __PATIENT_H
#define __PATIENT_H

#include "DateTime.h"
#include "Visitation_Form.h"
//#include "Department.h"

class Department;

class Patient
{
public:
	enum class Gender { MALE, FEMALE };


private:
	int ID;
	char* name;
	DateTime BirthDate;
	Gender gender;
	Department* currentDepartment;
	Visitation_Form** visitations;
	int numOfVisitationForms;

public:
	Patient(int ID, const char* name, Gender gender);
	~Patient();

	bool setName(const char* name);
	bool setID(int age);
	bool setBirthDate(DateTime BirthDate);
	bool setGender(Gender gender);
	bool addDepartment(Department* currentDepartment);

	char* getName()const;
	int getID()const;
	DateTime getBirthDate()const;
	Gender getGender()const;
	Department* getCurrentDepartment() const;
	int getNumOfVisitationForms() const;

	void addNewVisitation(Visitation_Form& visitation);

};




#endif