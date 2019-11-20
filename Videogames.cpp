#include <iostream>
#include <cstring>
#include "Videogames.h"
//Allows the inputting of data
Videogames::Videogames(char* newTitle, int newYear, char* newPublisher, float newRating) : Media(newTitle, newYear){
  strcpy(publisher, newPublisher);
  rating = newRating;
}
//Function definitions
char* Videogames::getPublisher(){
  return publisher;
}

float Videogames::getRating(){
  return rating;
}

int Videogames::getType(){
  return 1; 
}
//Destructor definition
/*Videogames::~Videogames() {
  delete publisher;
  }*/
