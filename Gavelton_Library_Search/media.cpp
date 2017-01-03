#include<iostream>
#include<string>
#include "media.h"
using namespace std;

	
mediaclass::mediaclass(string call_no, string titlevar, string subj, string notevar)
{
	title = titlevar;
	call_number = call_no;
	subjects = subj;
	notes = notevar;
}

void mediaclass::display()
{
	cout << endl << "Call Number :" << endl << call_number << endl;
	cout << endl << "Title :" << endl << title << endl;
	cout << endl << "Subject :" << endl << subjects << endl;
}

string mediaclass::get_title()const
{
	return title;
}

string mediaclass::get_callno()const
{
	return call_number;
}

string mediaclass::get_subjects()const
{
	return subjects;
}

string mediaclass::get_notes()
{
	return notes;
}
