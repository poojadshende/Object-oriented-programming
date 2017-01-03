#include <string>
#include <iostream>	
#include "periodic.h"
using namespace std;
	
periodicclass::periodicclass(string call_number2, string title2, string subjects2, string notes2, string author2, string description2, string 			   publisher2, string publishing_history2, string series2, string related_titles2, string other_forms_of_title2, string govt_doc_number2) : mediaclass(call_number2, title2, subjects2, notes2), author(author2), description(description2), publisher(publisher2), publishing_history(publishing_history2), series(series2), related_titles(related_titles2), other_forms_of_title(other_forms_of_title2), govt_doc_number(govt_doc_number2)  {}


bool periodicclass::compare_title(string search_string)
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
	
bool periodicclass::compare_callno(string search_string)
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

bool periodicclass::compare_subjects(string search_string)
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

bool periodicclass::compare_others(string search_string)
{
	bool isfound = true;
 	string str = get_description();
	string str1 = get_notes();
	string str2 = get_series();
	string str3 = get_relatedtitles();
	size_t val = str.find(search_string);
	size_t val1 = str1.find(search_string);
	size_t val2 = str2.find(search_string);
	size_t val3 = str3.find(search_string);
	if(val != std::string::npos)
		return isfound;
	else if(val1 != std::string::npos)
		return isfound;
	else if(val2 != std::string::npos)
		return isfound;
	else if(val3 != std::string::npos)
		return isfound;
	else
	{
		isfound = false;
		return isfound;
	}
}

string periodicclass::get_description()const
{
 	return description;
}

string periodicclass::get_series()const
{
 	return series;
}

string periodicclass::get_relatedtitles()const
{
 	return related_titles;
}


void periodicclass::display()
{
	cout << "*******************************Periodic Information is****************************" << endl;
	mediaclass :: display();
	cout << endl << "Periodic Author :" << endl << author << endl;
	cout << endl << "Periodic Description :" << endl << description << endl;
	cout << endl << "Periodic Publisher :" << endl << publisher << endl;
	cout << endl << "Publishing History :" << endl << publishing_history << endl;
	cout << endl << "Periodic Series :" << endl << series << endl;
	cout << endl << "Periodic Related Title :" << endl << related_titles << endl;
	cout << endl << "Other forms of title :" << endl << other_forms_of_title << endl;
	cout << endl << "Govt doc no :" << endl << govt_doc_number << endl;
	cout << endl << "Periodic notes :" << endl << notes << endl;
}

