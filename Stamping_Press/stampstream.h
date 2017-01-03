#include <ostream>

#include "stampbuf.h"

using namespace std;

#ifndef STAMPSTREAM_H
#define STAMPSTREAM_H

class stampstream:public ostream
{
  public:
    stampstream(int, int);
    ~stampstream();       
};

#endif
