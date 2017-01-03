#include<iostream>
#include<string>
#include "media.h"
using namespace std;

#ifndef PERIODIC_H
#define PERIODIC_H

class periodicclass:public mediaclass
{
    public:
     	periodicclass(string call_number2, string title2, string subjects2, string notes2, string author2, string description2, string 		publisher2, string publishing_history2, string series2, string related_titles2, string other_forms_of_title2, string govt_doc_number2);
	~periodicclass();	
	void display();
	bool compare_title(string search_string);
        bool compare_callno(string search_string);
	bool compare_subjects(string search_string);
	bool compare_others(string search_string);
	string get_description()const;
	string get_series()const;
	string get_relatedtitles()const;

    private:
	string author;
	string description;
	string publisher;
	string publishing_history;
	string series;
	string related_titles;
	string other_forms_of_title;
	string govt_doc_number;
};
#endif 
