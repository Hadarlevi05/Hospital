#ifndef __ARTICLE_H
#define __ARTICLE_H

#include "DateTime.h"

class Article
{

private:
	char* articleName;
	char* magazineName;
	DateTime publishDate;


public:

	Article(char* articleName, char* magazineName, DateTime & publishDate);
	Article(const Article& other);
	~Article();

	bool setArticleName(const char* articleName);
	bool setMagazineName(const char* magazineName);
	bool setPublishDate(const DateTime& publishDate);

	char* getArticleName() const;
	char* getMagazineName() const;
	DateTime getPublishDate()const;

};

#endif