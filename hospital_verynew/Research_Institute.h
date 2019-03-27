
#ifndef __RESERACH_INSTITUTE_H
#define __RESERACH_INSTITUTE_H

#include "Researcher.h"

class Research_Institute
{
public:
private:

	static const int MAX_NUM_OF_RESEARCHERS = 10;

	Researcher** researcher;
	int numOfReserchers;

public:

	//Research_Institute() = default;
	Research_Institute(int numOfReserchers = 0);
	int getNumOfReserchers() const;
	bool addResearcher(Researcher* researcher);
	void freeMemory();

};

#endif



