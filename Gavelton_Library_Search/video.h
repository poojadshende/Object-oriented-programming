#include<iostream>
#include<string>
#include "media.h"
using namespace std;

#ifndef VIDEO_H
#define VIDEO_H

class videoclass:public mediaclass
{
    public:
     	videoclass(string call_number3,string title3, string subjects3, string notes3, string description3, string distributor3, 			 string series3, string label3);
	~videoclass();
	void display();

	bool compare_title(string search_string);
        bool compare_callno(string search_string);
	bool compare_subjects(string search_string);
	bool compare_others(string search_string);
	string get_description()const;
	string get_distributor()const;

    private:
	string description;
	string distributor;
	string series;
	string label;
};
#endif 
