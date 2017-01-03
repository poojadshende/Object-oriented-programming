#include<iostream>
#include<string>
#include "media.h"
using namespace std;

#ifndef FILM_H
#define FILM_H

class filmclass:public mediaclass
{
    public:
     	filmclass(string call_number4, string title4, string subjects4, string notes4, string director4, string year4);
	~filmclass();
	void display();
	bool compare_title(string search_string);
        bool compare_callno(string search_string);
	bool compare_subjects(string search_string);
	bool compare_others(string search_string);
	string get_director()const;
	string get_year()const;

    private:
	string year;
	string director;
};
#endif 
