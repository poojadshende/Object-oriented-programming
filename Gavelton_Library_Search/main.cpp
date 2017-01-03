/*
Project name: Library project analysis and design
*/

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>
#include "searchengine.h"
#include "media.h"


using namespace std;

int main()
{
	char op;
	vector<mediaclass*> results;	// result vector
	searchengine se;		// creating searchengine object 'se'
	string search_string;
	bool flag = true;
	while(flag)
	{
	    int i;
	    cout << "1. By Title " << endl;
	    cout << "2. By Call_No" << endl;
	    cout << "3. By Subjects" << endl;
	    cout << "4. By Other" << endl;
	    cout << "Enter option from (1,2,3,4)" << endl;
	    cin >> i;
	    cout<< "Please enter the string" << endl;
	    cin>> search_string;
	
	    switch(i) 
	    {
		case 1:
		  results = se.search_by_title(search_string);
		  for(unsigned int i=0; i<results.size(); i++)
		  {
		    results[i]->display();
		  } 
		  break;

 		case 2:
		  results = se.search_by_callno(search_string);
		  for(unsigned int i=0; i<results.size(); i++)
		  {
		    results[i]->display();
		  } 
		  break;

		 case 3:
		  results = se.search_by_subjects(search_string);
		  for(unsigned int i=0; i<results.size(); i++)
		  {
		    results[i]->display();
		  } 
		  break;
		 case 4:
		  results = se.search_by_others(search_string);
		  for(unsigned int i=0; i<results.size(); i++)
		  {
		    results[i]->display();
		  } 
		  break;
	    	
	   
	   	 default: cout << "Enter valid option" << endl;
		 break;
	}
 	    cout << "Do you want to coninue(Y/N)" << endl;
	 	cin >> op;
	  if(op == 'Y')
 	   {
		flag = true;
	    }
	    else 
            {
		flag = false;
	    }
	}
	return 0;
}
