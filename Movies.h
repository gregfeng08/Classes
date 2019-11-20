#include <iostream>
#include "Media.h"

class Movies : public Media
{
public : //Public variable defintion
  Movies(char*, int, char*, float, float);
  ~Movies(); //Destructor definition
  char* getDirector();
  float getDuration();
  float getRating();
  int getType();
private: //Private variable definition
  char director[20];
  float duration;
  float rating;
};
