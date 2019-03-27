
#include <iostream>
using namespace std;
#include <string>

#include "Researcher.h"
#include "DateTime.h"
#include "Article.h"


Researcher::Researcher(char* name, int empolyeeID)
{
	setempolyeeID(empolyeeID);
	setResearcherName(name);
	

}

Researcher::Researcher(const Researcher& other)
{
	setempolyeeID(other.empolyeeID);
	setResearcherName(other.name);
	//HOW TO GET HIS ARTICLES? 
}

Researcher::~Researcher()
{
	
	delete[] name;
}

bool Researcher::addArticle(Article &newArticle)
{

	articles[numOfArticles] = &newArticle;
	numOfArticles++;
	return true;
}

bool Researcher::setResearcherName(const char* Name)
{

	delete[]name;
	name = new char[strlen(name) + 1];
	strcpy(name, Name);
	return true;
}

bool Researcher::setempolyeeID(int EmpolyeeID)
{
	empolyeeID = EmpolyeeID;
	return true;
}



char*  Researcher::getResearcherName() const
{
	return name;
}
int Researcher::getempolyeeID() const
{
	return empolyeeID;
}

Article** Researcher::getarticles() const
{
	return articles;
}







