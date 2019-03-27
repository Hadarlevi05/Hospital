
#ifndef __RESEARCHER_H
#define __RESEARCHER_H

#include "DateTime.h"
#include "Article.h"
class Researcher
{
public:
private:

	char* name;
	int empolyeeID;
	Article** articles;
	int numOfArticles;



public:
	Researcher() = default;
	Researcher(char* name, int empolyeeID);
	Researcher(const Researcher& other);
	~Researcher();
	bool addArticle(Article &newArticle);
	bool setResearcherName(const char* name);
	bool setempolyeeID(int empolyeeID);


	char*  getResearcherName() const;
	int getempolyeeID() const;
	Article** getarticles() const;

};

#endif



