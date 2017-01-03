#include <string>
#include <iostream>	
#include "film.h"
using namespace std;
	
filmclass::filmclass(string call_number4, string title4, string subjects4, string notes4, string director4, string year4) : 			    mediaclass(call_number4, title4, subjects4, notes4), director(director4), year(year4){}


bool filmclass::compare_title(string search_string)
{
	bool found = false;
	string str = get_title();
	size_t value = str.find(search_string);
	if(value == std::string::npos)
		return found;
	else {
		found = true;
		return found;
  	     }
}
	
bool filmclass::compare_callno(string search_string)
{
	bool found = false;
	string str = get_callno();
	size_t value = str.find(search_string);
	if(value == std::string::npos)
		return found;
	else {
		found = true;
		return found;
  	     }
}

bool filmclass::compare_subjects(string search_string)
{
	bool found = false;
	string str = get_subjects();
	size_t value = str.find(search_string);
	if(value == std::string::npos)
		return found;
	else {
		found = true;
		return found;
  	     }
}

bool filmclass::compare_others(string search_string)
{
	bool isfound = true;
 	string str = get_director();
	string str1 = get_notes();
	string str2 = get_year();
	size_t val = str.find(search_string);
	size_t val1 = str1.find(search_string);
	size_t val2 = str2.find(search_string);
	if(val != std::string::npos)
		return isfound;
	else if(val1 != std::string::npos)
		return isfound;
	else if(val2 != std::string::npos)
		return isfound;
	else
	{
		isfound = false;
		return isfound;
	}
}

string filmclass::get_director()const
{
	return director;
}

string filmclass::get_year()const
{
	return year;
}


void filmclass::display()
{
	cout << "**********************Film Information is******************************" << endl;
	mediaclass :: display();
	cout << "Film Director :" << endl << director << endl;
	cout << "Film Year :" << endl << year << endl;
	cout << "Film Notes :" << endl << notes << endl;
}

