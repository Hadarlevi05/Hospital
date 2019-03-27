#ifndef __NURSE_H
#define __NURSE_H

#include "Department.h"
class Nurse
{

private:

	int empolyeeID;
	char* name;
	int experienceYears;
	Department* department;

public:
	Nurse(int EmpolyeeID, char* Name, int ExperienceYears);
	Nurse(const Nurse& other);
	Nurse::Nurse();
	~Nurse();

	bool setEmpolyeeID(int empolyeeID);
	bool setName(const char* name);
	bool setExperienceYears(const int experienceYears);
	bool setDepartment(Department * department);


	//bool setDepartment(const Department& department);

	char * getName()   const;
	int getEmpolyeeID()    const;
	int getExperienceYears() const;
	//Department getDepartment() const;
};

#endif


//#ifndef __NURSE_H
//#define __NURSE_H
//
//#include "Department.h"
//class Nurse
//{
//
//private:
//
//	int empolyeeID;
//	char* name;
//	int experienceYears;
//	Department* department;
//
//public:
//	Nurse(int empolyeeID = 0, char* name = nullptr, int experienceYears = 0, Department* department = nullptr);
//	Nurse(const Nurse& other);
//	~Nurse();
//
//	bool setEmpolyeeID(int empolyeeID);
//	bool setName(const char* name);
//	bool setExperienceYears(int experienceYears);
//	bool setDepartment(Department* department);
//
//	char * getName()   const;
//	int getEmpolyeeID()    const;
//	int getExperienceYears() const;
//	Department* getDepartment()const;
//	bool setDepartment(const Department* Department);
//};
//
//
//
//
//#endif
