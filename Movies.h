#include <iostream>
#include "Media.h"

class Movies : public Media
{
 public :
  Movies(char*, int, char*, float, float);
  char* getDirector();
  float getDuration();
  float getRating();
  int getType();
 private:
  char director[20];
  float duration;
  float rating;
};
