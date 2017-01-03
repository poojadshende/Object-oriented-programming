#include <streambuf>

using namespace std;

#ifndef STAMPBUF_H
#define STAMPBUF_H

class stampbuf:public streambuf
{
  private:
    int cur_col;
    int cur_row;
    char* buffer; 
   
  public:
    stampbuf(int c, int r);
    ~stampbuf();
    virtual int sync();
    virtual int overflow(int ch);
    void add_one_to_row();
    void set_row(int);
};

#endif
