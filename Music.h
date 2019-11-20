#include <iostream>
#include "Media.h"
#include <cstring>
class Music : public Media
{
public: //Variable definitions
  Music(char*, int, char*, float, char*);
  ~Music(); //Destructor definition
  char* getArtist();
  float getDuration();
  char* getPublisher();
  int getType();
 private:
  char* artist; //Private variable definition
  float duration;
  char* publisher;
};
