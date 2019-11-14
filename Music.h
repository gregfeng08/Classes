#include <iostream>
#include "Media.h"

class Music : public Media
{
 public:
  Music(char*, int, char*, float, char*);
  char* getArtist();
  float getDuration();
  char* getPublisher();
  int getType();
 private:
  char artist[20];
  float duration;
  char publisher[20];
};
