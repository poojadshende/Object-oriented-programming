#include<string>
#include<iostream>
#include<sstream>
#include<fstream>
#include<vector>
#include "searchengine.h"
#include "media.h"
#include "book.h"
#include "periodic.h"
#include "video.h"
#include "film.h"

using namespace std;

searchengine::searchengine()
{
	string call_number;
	string title;
	string subjects;
	string author;
	string description;
 	string publisher;
	string city;
	string year;
	string series;
	string notes; 

	string publishing_history;
	string related_titles;
	string other_forms_of_title;
	string govt_doc_number;

	string distributor;
	string label;

	string director;  
	
	string line = " " ;		
	ifstream file_handler("book.txt", ios::in);
	while(!file_handler.eof())
	{		
		getline(file_handler, line);
		stringstream str(line);
		while(str.good())
		{
		
			getline(str,call_number,'|')	;
			getline(str,title,'|');
			getline(str,subjects,'|');
			getline(str,author,'|');
			getline(str,description,'|');
			getline(str,publisher,'|');
			getline(str,city,'|');
			getline(str,year,'|');
			getline(str,series,'|');
			getline(str,notes,'\n');	
		}
	        mediaclass *bk = new bookclass(call_number,title,subjects,notes,author,description,publisher,city,year,series);
		
	        cardcatalog.push_back(bk);
	}


	line = " " ;		
	ifstream file_handler1("periodic.txt", ios::in);
	while(!file_handler1.eof())
	{
		getline(file_handler1, line);
		stringstream str(line);
		while(str.good())
		{
		
			getline(str,call_number,'|')	;
			getline(str,title,'|');
			getline(str,subjects,'|');
			getline(str,author,'|');
			getline(str,description,'|');
			getline(str,publisher,'|');
			getline(str,publishing_history,'|');
			getline(str,series,'|');
			getline(str,notes,'|');
			getline(str,related_titles,'|');
			getline(str,other_forms_of_title,'|');
			getline(str,govt_doc_number,'\n');
		}
	        mediaclass *bk1 = new periodicclass(call_number, title, subjects, notes, author, description, publisher, publishing_history, 			series, related_titles, other_forms_of_title, govt_doc_number);
		
	        cardcatalog.push_back(bk1);
		

	}
    
		
	line = "" ;		
	ifstream file_handler2("video.txt", ios::in);
	while(!file_handler2.eof())
	{
		getline(file_handler2, line);
		stringstream str(line);
		
		while(str.good())
		{
		
			getline(str,call_number,'|')	;
			getline(str,title,'|');
			getline(str,subjects,'|');
			getline(str,description,'|');
			getline(str,distributor,'|');
			getline(str,notes,'|');
			getline(str,series,'|');
			getline(str,label,'\n');
			
		}
	        mediaclass *bk2 = new videoclass(call_number, title, subjects, notes, description, distributor, series, label);
		
	        cardcatalog.push_back(bk2);
		

	} 

	line = "" ;		
	ifstream file_handler3("film.txt", ios::in);
	while(!file_handler3.eof())
	{
		getline(file_handler3, line);
		stringstream str(line);
		while(str.good())
		{
		
			getline(str,call_number,'|')	;
			getline(str,title,'|');
			getline(str,subjects,'|');
			getline(str,director,'|');
			getline(str,year,'|');
			getline(str,notes,'\n');
				
		}

	        mediaclass *bk3 = new filmclass(call_number, title, subjects, notes, director, year);
		
	        cardcatalog.push_back(bk3);
		

	} 
}

vector<mediaclass *> searchengine::search_by_title(string search_string)	
{
	vector<mediaclass *> temp;
	mediaclass *mobj;
		
	for(int i = 0; i < cardcatalog.size(); i++) 
	{	
		 mobj = cardcatalog[i];	
		 bool found = mobj->compare_title(search_string);
	         if(found)
		 {
		    temp.push_back(mobj);
	         }
		
	}
	return temp;
}

vector<mediaclass *> searchengine::search_by_callno(string search_string)	
{
	vector<mediaclass *> temp;
	mediaclass *mobj;
		
	for(int i = 0; i < cardcatalog.size(); i++) 
	{	
		 mobj = cardcatalog[i];	
		 bool found = mobj->compare_callno(search_string);
	         if(found)
		 {
		    temp.push_back(mobj);
	         }
		
	}
	return temp;
}


vector<mediaclass *> searchengine::search_by_subjects(string search_string)	
{
	vector<mediaclass *> temp;
	mediaclass *mobj;
		
	for(int i = 0; i < cardcatalog.size(); i++) 
	{	
		 mobj = cardcatalog[i];	
		 bool found = mobj->compare_subjects(search_string);
	         if(found)
		 {
		    temp.push_back(mobj);
	         }
		
	}
	return temp;
}


vector<mediaclass *> searchengine::search_by_others(string search_string)	
{
	vector<mediaclass *> temp;
	mediaclass *mobj;
		
	for(int i = 0; i < cardcatalog.size(); i++) 
	{	
		 mobj = cardcatalog[i];	
		 bool found = mobj->compare_others(search_string);
	         if(found)
		 {
		    temp.push_back(mobj);
	         }
		
	}
	return temp;
}

