#include <iostream>
using namespace std;
#include <string>

#include "Hospital.h"
//#include "Research_Institute.h"
#include "Patient.h"
#include "Nurse.h"
#include "Doctor.h"
#include "Department.h"

Hospital::Hospital(char* name, int NumOfDepartments, int NumOfPatients, int NumOfNourses, int NumOfDoctors) : name(nullptr)
{

	Patients = new Patient*[MAX_NUM_OF_PATIENTS];
	nurses = new Nurse*[MAX_NUM_OF_NURSES];
	doctors = new Doctor*[MAX_NUM_OF_DOCTORS];
	departments = new Department*[MAX_NUM_OF_DEPARTMENTS];

	//test commit
	setName(name);
	numOfDepartments = NumOfDepartments;
	numOfPatients = NumOfPatients;
	numOfNourses = NumOfNourses;
	numOfDoctors = NumOfDoctors;
}

bool Hospital::setName(const char* Name)
{
	delete[]name;
	name = new char[strlen(Name) + 1];
	strcpy(name, Name);
	return true;
}

const char* Hospital::getName() const
{
	return name;
}

//Research_Institute Hospital::getResearchInstitute() const
//{
//	return researchInstitute;
//}

int Hospital::getNumOfDoctors() const
{
	return numOfDoctors;
}

int Hospital::getNumOfDepartments() const
{
	return numOfDepartments;
}

//int Hospital::getNumOfPatients() const
//{
//	return getNumOfPatients;
//}
//

int Hospital::getNumOfNurses() const {
	return numOfNourses;
}

Department ** Hospital::getAllDepartments() const
{
	return departments;
}

//Research_Institute getResearchInstitute;
Patient** Hospital::getAllPatients() const
{
	return Patients;
}

Nurse ** Hospital::getAllNurses() const
{
	return nurses;
}

Doctor ** Hospital::getAllDoctors() const
{
	return doctors;
}


bool Hospital::addDepartment(Department& department) {

	departments[numOfDepartments] = &department;
	numOfDepartments++;

	return true;
}

bool Hospital::addNurse(Nurse & nurse)
{
	nurses[numOfNourses] = &nurse;
	numOfNourses++;
	return true;
}

bool Hospital::addDoctor(Doctor& doctor)
{
	doctors[numOfDoctors] = &doctor;
	numOfDoctors++;
	return true;
}
bool Hospital::addPatient(Patient& patient)
{
	Patients[numOfPatients] = &patient;
	numOfPatients++;
	return true;
}
//bool addPatient(Patient& patient);
//bool addNurse(Nurse& nurse);
//bool addDoctor(Doctor& doctor);
//
//Patient* getPatientByID(int id);

//
Hospital::~Hospital()
{

	delete[]name;
	for (int i = 0; i < numOfDepartments; i++)
		delete departments[i];
	delete[]departments;

	//for (int i = 0; i < numOfPatients; i++)
	//	delete Patients[i];
	//delete[]Patients;

	/*for (int i = 0; i < numOfNourses; i++)
		delete nurses[i];
	delete[]nurses;


	for (int i = 0; i < numOfDoctors; i++)
		delete doctors[i];
	delete[]doctors;

	delete[]name;*/

}

Patient* Hospital::searchPatientByID(int id)
{
	for (int i = 0; i < numOfPatients; i++)
	{
		if (int(Patients[i]->getID()) == id)
			return Patients[i];
	}
	return nullptr;
}