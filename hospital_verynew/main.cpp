#include <iostream>
using namespace std;

#include "Doctor.h"
#include "Nurse.h"
#include "Hospital.h"
#include "Department.h"
#include "DateTime.h"
#include "Article.h"
#define NAME_LENGTH 100
#define SPECIALIZATION_LENGTH 1000
void main() {

	Hospital hospital("Meir");
	DateTime date(2019, 3, 24, 23, 1);

	//Department department("Shani");
	//hospital.addDepartment(department);




	//Nurse joy(1, "Nurse Joy", 5, department);
	//hospital.addNurse(joy);

	//Nurse joy2(32, "Nurse Joy2",2, department);
	//hospital.addNurse(joy2);


	//Article asdf();

	char name[NAME_LENGTH];

	cout << "please enter department Name" << endl;
	cin.ignore();
	cin.getline(name, NAME_LENGTH);
	Department department(name);
	hospital.addDepartment(department);
	int employeeID;
	int exprinceYears;
	cout << "please enter nurse employeeID,Name,exprince years" << endl;
	cin >> employeeID;
	cin.ignore();
	cin.getline(name, NAME_LENGTH);
	cin >> exprinceYears;
	Nurse nurse(employeeID, name, exprinceYears);
	nurse.setDepartment(&department);
	//cout << "please enter Doctor employeeID,Name,specilization " << endl;
	//cin >> employeeID;
	//cin.ignore();
	//cin.getline(name, NAME_LENGTH);
	//char specilization[SPECIALIZATION_LENGTH];
	//cin.ignore();
	//cin.getline(specilization, SPECIALIZATION_LENGTH);
	//Doctor doctor(employeeID, name, specilization, department);
	const char* u = "nameChanged";
	department.setName(u);


	cout << "pleast insert id to the patint you want to add visitaionForm";
	cin >> employeeID;
	DateTime arrivalDate;
	int visitPurpose;
	int responsibleEmployeeID;
	Patient   p1(1, "hadar", (Patient::Gender)1);
	Patient   p2(2, "liza", (Patient::Gender)1);
	Patient p3(2, "liza", (Patient::Gender)1);
	hospital.addPatient(p1);
	hospital.addPatient(p2);
	hospital.addPatient(p3);
	auto patient = hospital.searchPatientByID(2);
	if (patient)
	{
		DateTime arrivalDate(2018, 1, 18);
		cout << "please enter purposeOfVisit,responsibleEmployeeID";
		cin >> visitPurpose >> responsibleEmployeeID;
		Visitation_Form VisitationForm((Visitation_Form::PurposeOfVisit)visitPurpose, responsibleEmployeeID, arrivalDate);
		patient->addNewVisitation(VisitationForm);
	}
	else
	{

	}
}