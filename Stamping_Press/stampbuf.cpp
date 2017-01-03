#include <iostream>

#include "stamp.h"
#include "stampbuf.h"

using namespace std;
using namespace stamping_press;

stampbuf::stampbuf(int c, int r)
:streambuf(), cur_col(0), cur_row(0),buffer(new char[15])
{
  insert_plate(c, r);
  setp(buffer, buffer+15);
}

int stampbuf::overflow(int ch) 
{
  for(char *i = pbase(); i != pptr(); i++ ) 
  {
    try 
    {
      set_die(*i);
    }catch(...) 
     {
      if(*i != get_die()) 
      {
        cur_col++;
        continue;
      }
     }
     try 
     {
       stamp(cur_col, cur_row);
     }catch(...)
      {
        cur_col++;
      }  
    cur_col++;
  }
  setp(buffer, buffer+15); 
  sputc(ch);
  return 0;
} 

int stampbuf::sync()
{
  for(char *i = pbase(); i != pptr(); i++ ) 
  {
    try 
    {
      set_die(*i);
    }catch(...) 
     {
      if(*i != get_die()) 
      {
        cur_col++;
        continue;
      }
     }
     try 
     {
       stamp(cur_col, cur_row);
     }catch(...)
      {
        cur_col++;
      }  
    cur_col++;
  }
  setp(buffer, buffer+15); 
  return 0;
} 

void stampbuf::add_one_to_row()
{
  cur_row++;
  cur_col = 0;
}

void stampbuf::set_row(int r)
{
  cur_row = r;
  cur_col = 0;
}

stampbuf::~stampbuf() 
{
  sync();
  delete [] buffer;
  eject_plate();
}
