#ifndef __VISITATION_FORM_H
#define __VISITATION_FORM_H

#include "DateTime.h"

class Visitation_Form
{
public:
	enum class PurposeOfVisit { DOCTORCHECK, SURGERY, HOSPITALIZATION };
private:

	//Patient* patient;
	DateTime arrivalDate;
	PurposeOfVisit purposeOfVisit;
	int responsibleEmployeeID;

public:
	//Visitation_Form() = default;
	Visitation_Form(PurposeOfVisit purposeOfVisit, int responsibleEmployeeID, DateTime& arrivalDate);


	bool setArrivaleDate(DateTime arrivaleDate);
	bool setePurposeOfVisit(PurposeOfVisit purposeOfVisit);
	bool setResponsibleEmployeeID(int responsibleEmployeeID);
	bool setArrivalDate(const DateTime& arrivalDate);


	//Patient& getPatient() const;
	PurposeOfVisit getePurposeOfVisit()const;
	int getResponsibleEmployeeID()const;
	DateTime getArrivalDateTime() const;

};

#endif