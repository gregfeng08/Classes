#include <iostream>
#include "Media.h"

class Videogames : public Media {
public: //Public variable defintions
  Videogames(char*, int, char*, float);
  ~Videogames(); //Destructor definitions
  char* getPublisher();
  float getRating();
  int getType();
private: //Private variable definitions
  char publisher[20];
  float rating;
};
