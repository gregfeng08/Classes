#include <iostream>
#include <cstring>
#include "Movies.h"
//Allows the adding of 
Movies::Movies(char* newTitle, int newYear, char* newDirector, float newDuration, float newRating) : Media(newTitle, newYear){
  strcpy(director, newDirector);
  duration = newDuration;
  rating = newRating;
}

char* Movies::getDirector(){ //Returns respective information
  return director;
}

float Movies::getDuration(){
  return duration;
}

float Movies::getRating(){
  return rating;
}

int Movies::getType(){
  return 3;
}
//Destructor
/*Movies::~Movies() {
  delete director;
  }*/
