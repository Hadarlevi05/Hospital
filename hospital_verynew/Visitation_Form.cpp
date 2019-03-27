#include "Visitation_Form.h"

Visitation_Form::Visitation_Form(Visitation_Form::PurposeOfVisit purposeOfVisit, int responsibleEmployeeID,DateTime& ArrivalDate)
{
	setePurposeOfVisit(purposeOfVisit);
	setResponsibleEmployeeID(responsibleEmployeeID);
}


bool Visitation_Form::setArrivaleDate(DateTime ArrivaleDate)
{
	arrivalDate = ArrivaleDate;
	return true;
}
bool Visitation_Form::setePurposeOfVisit(PurposeOfVisit PurposeOfVisit)
{
	purposeOfVisit = PurposeOfVisit;
	return true;
}
bool Visitation_Form::setResponsibleEmployeeID(int ResponsibleEmployeeID)
{
	// check if exist

	responsibleEmployeeID = ResponsibleEmployeeID;
	return true;
}


//Patient& getPatient() const;
Visitation_Form::PurposeOfVisit Visitation_Form::getePurposeOfVisit()const
{
	return purposeOfVisit;
}
DateTime Visitation_Form::getArrivalDateTime()const
{
	return arrivalDate;
}
int Visitation_Form::getResponsibleEmployeeID()const
{
	return responsibleEmployeeID;
}
bool Visitation_Form::setArrivalDate(const DateTime& ArrivalDate)
{
	arrivalDate = ArrivalDate;
	return true;
}
