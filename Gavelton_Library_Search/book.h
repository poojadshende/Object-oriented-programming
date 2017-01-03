#include<iostream>
#include<string>
#include "media.h"
using namespace std;

#ifndef BOOK_H
#define BOOK_H

class bookclass:public mediaclass
{
    public:
     	bookclass(string call_number1,string title1, string subjects1, string notes1, string author1, string description1, string publisher1, 			 string city1, string year1, string series1);
	~bookclass();	
	void display();
	bool compare_title(string search_string);
        bool compare_callno(string search_string);
	bool compare_subjects(string search_string);
	bool compare_others(string search_string);
	string get_desc()const;
	string get_year()const;
	
    private:
	string author;
	string description;
	string publisher;
	string city;
	string series;
	string year;
};
#endif 
