/*
Project name: Stamping Press
*/

#include <iostream>
#include <stdexcept>

#include "stamp.h"
#include "stampstream.h"
#include "stampbuf.h"
#include "row.h"

using namespace stamping_press;

ostream& endrow (ostream& os) 
{
  stampbuf* sb = dynamic_cast <stampbuf*> (os.rdbuf());
  os.flush();
  sb->add_one_to_row(); // Incrementing row and setting column to 0.
  return os;
}

ostream& operator<<(ostream& os, const row& r) 
{
  stampbuf* sb = dynamic_cast <stampbuf*> (os.rdbuf());
  os.flush(); 
  sb->set_row(r.get_row()); 
  return os;
}

int main() {
  stampstream s(30,10);
  s << "hi th#re planetoid humans"<< endrow
  << " how's all the fish" << row(5) << "one more";
  s << row(4) << " two more" << 3.1415;
  s << row(8) << "The quick brown fox jumped over the lazy dog's back.";
  s << row(3) << "the end";
  return 0; 
}
