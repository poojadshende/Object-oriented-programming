#include <string>
#include <iostream>
#include"media.h"	
#include "book.h"
using namespace std;
	
bookclass::bookclass(string call_number1, string title1, string subjects1, string notes1, string author1, string description1, string 			   publisher1, string city1, string year1, string series1) : mediaclass(call_number1, title1, subjects1, notes1), 			   author(author1), description(description1), publisher(publisher1), city(city1), year(year1), series(series1) {}


bool bookclass::compare_title(string search_string)
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
	
bool bookclass::compare_callno(string search_string)
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

bool bookclass::compare_subjects(string search_string)
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


bool bookclass::compare_others(string search_string)
{
	bool isfound = true;
 	string str = get_desc();
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
	else{
		isfound = false;
		return isfound;		
	}
}


string bookclass::get_desc()const
{
	return description;
}

string bookclass::get_year()const
{
	return year;
}

void bookclass::display()
{
	cout << "************************Book Information is*********************:" << endl;
	mediaclass :: display();
	cout << endl << "Book Author is :" << endl << author << endl;
	cout << endl << "Book Description is :" << endl << description << endl;
	cout << endl << "Book Publisher is :" << endl << publisher << endl;
	cout << endl << "Book City is :" << endl << city << endl;
	cout << endl << "Book Series :" << endl << series << endl;
	cout << endl << "Book Year :" << endl << year << endl;
	cout << endl << "Book Notes :" << endl << notes << endl;
}

