/*
Stack class with implemented exception handling
*/

#include<iostream>
using namespace std;

template <class TYP> class Stack
{
  public:
    Stack();
    Stack(const Stack&);
    ~Stack();
    Stack& operator=(const Stack&);
    int count();
    void push(TYP);
    TYP pop();
	
	private:
    static const int chunk_size;
    unsigned maximum_size;
    int current_size;
    TYP* base;
};

template <class TYP> const int Stack<TYP>::chunk_size=10;

template <class TYP> Stack<TYP>::Stack()
:current_size(-1),maximum_size(chunk_size),base(new TYP[chunk_size])
{
  if(base==0)
    throw "No more memory!";
}

template <class TYP>  Stack<TYP>::Stack(const Stack& s)
:maximum_size(s.maximum_size), base(new TYP[s.maximum_size])
{
  if(base==0)
    throw "No more memory!";
  if(s.current_size>-1)
  {
try
{
    for(current_size=0; current_size<=s.current_size; current_size++)
      base[current_size]=s.base[current_size];
    current_size--;
}catch(...)
{
    string str = "Error due to copy constructor";
    throw;
}
  }
}

template <class TYP> Stack<TYP>::~Stack()
{
  delete [] base;
}

template <class TYP> Stack<TYP>& Stack<TYP>::operator=(const Stack<TYP>& s)
{
  TYP* temp_base=new TYP[maximum_size];
  int temp_var=maximum_size;
  int temp_var1=current_size;
try
{ 
  delete [] base;
  maximum_size=s.maximum_size;
  base=new TYP[maximum_size];
  if(base==0)
    throw "No more memory!";
  current_size=s.current_size;
  if(current_size>-1)
  {
    for(int x=0; x<=current_size; x++)
      base[x]=s.base[x];
  }
  return *this;
}catch(...)
{
   base=temp_base;
   maximum_size=temp_var;
   current_size=temp_var1;
   string str="Error due to assignment operator";
   throw;
}
}

template <class TYP> void Stack<TYP>::push(TYP element)
{
  current_size++;
  if(current_size==maximum_size-1)
  {
    maximum_size+=chunk_size;
    TYP* new_buffer = new TYP[maximum_size];
try
{ 
   if(new_buffer==0)
      throw "No more memory!";

   for(int x=0; x<current_size; x++)
      new_buffer[x]=base[x];
   delete [] base;
   base=new_buffer;
}catch(...)
{
	maximum_size = maximum_size - chunk_size;
	current_size--;
	if (new_buffer != 0)
	   delete[] new_buffer;
	string str = "Push function error";
	throw;
  } 
   
}
try
{
  base[current_size]=element;
}catch(...)
{
  current_size--;
  string str1="Push function error";
  throw;
}
}

template <class TYP> TYP Stack<TYP>::pop()
{
 try{
  return base[current_size--];
}catch(...)
{
  current_size++;
  string str="Pop function error";
  throw;
}

}

template <class TYP> int Stack<TYP>::count()
{

  return current_size+1;

}




