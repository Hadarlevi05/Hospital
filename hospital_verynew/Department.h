#ifndef __DEPARTMENT_H
#define __DEPARTMENT_H

#include "Patient.h"

class Department
{
public:

private:
	char* name;
	Patient ** patients;
	//int numOfDoctors;
	//int numOfNourses;
	int numOfPatients;

public:
	//Department() = default;
	Department(const char* name= "", Patient ** patients=nullptr, int numOfPatients=0);
	Department(const Department& other);
	~Department();

	bool setName(const char* name);

	bool setNumOfPatients(int NumOfPatients);
	const char* getName(const char* name) const;
	
	Patient** getAllPatiants() const;
	int getNumOfPatients() const;

	bool addPatient(Patient& patient);
	//bool addNurse(Nurse& nurse);
	//bool addDoctor(Doctor& doctor);
};




#endif