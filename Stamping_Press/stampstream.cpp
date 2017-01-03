#include <iostream>

#include "stampstream.h"

stampstream::stampstream(int c, int r)
:ostream(new stampbuf(c,r)) {}

ostream& operator<<(ostream& os, const stampstream& s1) 
{
  return os;
}

stampstream::~stampstream() 
{
  delete rdbuf();
}
