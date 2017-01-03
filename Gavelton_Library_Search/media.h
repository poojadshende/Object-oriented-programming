#include<iostream>
#include<string>

using namespace std;

#ifndef MEDIA_H
#define MEDIA_H
class mediaclass
{
    public:
        mediaclass(string, string , string, string);
        virtual void display() = 0;
	virtual bool compare_title(string )=0;	
	virtual bool compare_callno(string )=0;
	virtual bool compare_subjects(string )=0;
	virtual bool compare_others(string )=0;
    	string get_title ()const;
	string get_callno ()const;
	string get_subjects ()const;
	virtual string get_notes();
	

    protected:
        string notes;
    private:
        string title;
        string call_number;
        string subjects;
};

#endif // MEDIA_H
