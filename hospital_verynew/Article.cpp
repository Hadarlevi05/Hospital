#include <iostream>
using namespace std;
#include <string>
#include "Article.h"
#include "DateTime.h"

Article::Article(char* articleName, char* magazineName, DateTime& publishDate) 
{
	setArticleName(articleName);
	setMagazineName(magazineName);
	setPublishDate(publishDate);
}

Article::Article(const Article& other) {
	setArticleName(other.articleName);
	setMagazineName(other.magazineName);
	setPublishDate(other.publishDate);
}

Article::~Article() {
	delete[]articleName;
	delete[]magazineName;
	//delete[]magazineName;
}

bool Article::setArticleName(const char* ArticleName)
{
	delete[]articleName;
	articleName = new char[strlen(articleName) + 1];
	strcpy(articleName, ArticleName);
	return true;
}

bool Article::setMagazineName(const char* MagazineName)
{
	delete[]magazineName;
	magazineName = new char[strlen(magazineName) + 1];
	strcpy(magazineName, MagazineName);
	return true;

}
bool Article::setPublishDate(const DateTime& PublishDate)
{
	publishDate = PublishDate;
	return true;
}

char* Article::getArticleName() const
{
	return articleName;
}

char* Article::getMagazineName() const
{	
	return magazineName;
}

DateTime Article::getPublishDate()const
{	
	return publishDate;
}


