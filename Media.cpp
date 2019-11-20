#include <iostream>
#include "Media.h"
#include <cstring>
//Allows for the input for all of the common information
Media::Media(char* newTitle, int newYear){
  title = new char[strlen(newTitle)+1];
  strcpy(title, newTitle);
  year = newYear;
}
//Returns respective informations function
char* Media::getTitle(){
  return title;
}

int Media::getYear(){
  return year;
}

int Media::getType(){
  return 1;
}

Media::~Media() { //Destructor definition
  delete[] title;
}
