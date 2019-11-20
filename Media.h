#include <iostream>
#include <cstring>

#ifndef MEDIA_H
#define MEDIA_H

class Media{
public: //Public variable definitions
  Media(char*, int);
  char* getTitle();
  int getYear();
  ~Media(); //Destructor definition
  virtual int getType(); //Type is virtual
private: //Private variable definitions
  char* title;
  int year;
};

#endif
