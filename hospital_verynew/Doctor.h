#ifndef __DOCTOR_H
#define __DOCTOR_H

#include "Department.h"
class Doctor
{

private:

	int empolyeeID;
	char* name;
	char* specialization;
	Department* department;

public:

	Doctor(int empolyeeID, const char* name, const char* specialization);
	Doctor(const Doctor& other);
	~Doctor();

	bool setEmpolyeeID(int empolyeeID);
	bool setName(const char* name);
	bool setSpecialization(const char* specialization);
	bool setDepartment( Department* department);

	const char * getName()   const;
	int          getEmpolyeeID()    const;
	char*        getSpecialization() const;
	Department*   getDepartment() const;

};




#endif
