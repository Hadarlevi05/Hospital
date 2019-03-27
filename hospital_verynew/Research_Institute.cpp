#include "Research_Institute.h"

Research_Institute::Research_Institute(int numOfReserchers )
{
	researcher = new Researcher*[MAX_NUM_OF_RESEARCHERS];

}
bool Research_Institute::addResearcher(Researcher* Researcher)
{
	researcher[numOfReserchers] = Researcher;
	numOfReserchers++;
	return true;
}

