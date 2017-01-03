#include <string>
#include <iostream>	
#include "video.h"
using namespace std;
	
videoclass::videoclass(string call_number3, string title3, string subjects3, string notes3, string description3, string 			distributor3, string series3, string label3) : mediaclass(call_number3, title3, subjects3, notes3), 			        description(description3), distributor(distributor3), series(series3), label(label3) {}


bool videoclass::compare_title(string search_string)
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
	
bool videoclass::compare_callno(string search_string)
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

bool videoclass::compare_subjects(string search_string)
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

bool videoclass::compare_others(string search_string)
{
	bool isfound = true;
 	string str = get_description();
	string str1 = get_notes();
	string str2 = get_distributor();
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

string videoclass::get_description()const
{
 	return description;
}

string videoclass::get_distributor()const
{
 	return distributor;
}

void videoclass::display()
{
	cout << "***********************Video Information is***************************" << endl;
	mediaclass :: display();
	cout << endl << "Video Description :" << endl <<  description << endl;
	cout << endl << "Video Distributor :" << endl << distributor << endl;
	cout <<endl <<  "Video Series :" << endl << series << endl;
	cout << endl << "Video Label :" << endl << label << endl;
	cout << endl << "Video Notes :" << endl << notes << endl;
}

