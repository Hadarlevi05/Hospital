#ifndef __HOSPITAL_H
#define __HOSPITAL_H

#include "Patient.h"
#include "Department.h"
#include "Nurse.h"
#include "Doctor.h"
//#include "Research_Institute.h"

class Hospital

{
public:
private:

	static const int MAX_NUM_OF_DEPARTMENTS = 10;
	static const int MAX_NUM_OF_PATIENTS = 10;
	static const int MAX_NUM_OF_NURSES = 10;
	static const int MAX_NUM_OF_DOCTORS = 10;


	char* name;
	Department ** departments;
	//Research_Institute researchInstitute;
	Patient** Patients;
	Nurse ** nurses;
	Doctor ** doctors;
	int numOfDepartments;
	int numOfPatients;
	int numOfNourses;
	int numOfDoctors;
public:

	Hospital(char* name, int numOfDepartments = 0, int numOfPatients=0,int numOfNourses=0,int numOfDoctors=0);
	~Hospital();


	bool setName(const char* name);

	const char* getName()   const;
	int getNumOfDepartments()const;

	int getNumOfPatients() const;
	int getNumOfNurses() const;
	int getNumOfDoctors() const;
	Department ** getAllDepartments() const;
	//Research_Institute getResearchInstitute() const;
	Patient** getAllPatients() const;
	Nurse ** getAllNurses() const;
	Doctor ** getAllDoctors() const;

	bool addDepartment(Department& department);
	bool addPatient(Patient& patient);
	bool addNurse(Nurse& nurse);
	bool addDoctor(Doctor& doctor);
	Patient* searchPatientByID(int id);
	//Patient* getPatientByID(int id);

};




#endif