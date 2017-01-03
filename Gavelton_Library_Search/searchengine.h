#include<iostream>
#include<string>
#include<vector>
#include "media.h"
#include "book.h"
#include "periodic.h"
#include "video.h"
#include "film.h"

using namespace std;

#ifndef SEARCHENGINE_H
#define SEARCHENGINE_H
class searchengine
{
    public:
        searchengine();
	vector<mediaclass *> search_by_title(string search_string);
	vector<mediaclass *> search_by_callno(string search_string);
	vector<mediaclass *> search_by_subjects(string search_string);
	vector<mediaclass *> search_by_others(string search_string);
        
    private:
	vector <mediaclass *> cardcatalog ;
};

#endif // SEARCHENGINE_H
