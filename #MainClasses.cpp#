#include <iostream>
#include <vector>
#include <cstring>
#include "Media.h"
#include "Movies.h"
#include "Music.h"
#include "videogames.h"

using namespace std;

void add(vector<Media*>* array);

//void search(vector<Media*>* array);

//void del(vector<Media*>* array);

void addMovie(vector<Media*>* array);

void addVideogame(vector<Media*>* array);

void addMusic(vector<Media*>* array);

int main() {
    bool codeRunning = true;
    vector<Media*>* array;
    char userInput[10];
    cout << "Hi and welcome to the Classes program. Current functions: ADD, DELETE, SEARCH and QUIT" << endl;
    cin >> userInput;
    while(codeRunning == true) {
      if (strcmp(userInput, "ADD") == 0) {
	add(array);
      }
      else if (strcmp(userInput, "DELETE") == 0) {
	//	del(array);
      }
      else if (strcmp(userInput, "SEARCH") == 0) {
	//search(array);
      }
      else if (strcmp(userInput, "QUIT") == 0) {
	codeRunning = false;
	break;
      }
      else {
	cout << "Invalid input, please enter either ADD, SEARCH, DELETE, or QUIT" << endl;
      }
    }
}

void addMovie(vector <Media*> *arr) {
  char title[20] = "";
  char director[20] = "";
  int year = 0;
  float duration = 0.0;
  float rating = 0.0; 
  cout << "Title?" << endl;
  cin.get(title, 20);
  cin.clear();
  cin.ignore(9999, '\n');
  cout << "Director?" << endl;
  cin >> director;
  cin.clear();
  cin.ignore(9999, '\n');
  cout << "Year?" << endl;
  cin >> year;
  cin.clear();
  cin.ignore(9999, '\n');
  
  cout << "Duration?" << endl;
  cin >> duration;
  cin.clear();
  cin.ignore(9999, '\n');
  
  cout << "Rating?" << endl;
  cin >> rating;
  cin.clear();
  cin.ignore(9999, '\n');
  
  //arr->push_back(new Movies(title, year, director, duration, rating));
  
  cout << "Pushed!" << endl;
}

void addVideogame(vector <Media*> *arr) {
  char title[20] = "";
  int year = 0;
  char publisher[20] = "";
  float rating = 0.0;
  cout << "Title?" << endl;
  cin.get(title, 20);
  cin.clear();
  cin.ignore(9999, '\n'); 
  cout << "Year?" << endl;
  cin >> year;
  cin.clear();
  cin.ignore(9999, '\n');
  
  cout << "Publisher?" << endl;
  cin.get(publisher, 20);
  cin.clear();
  cin.ignore(9999, '\n');
  
  cout << "Rating?" << endl;
  cin >> rating;
  cin.clear();
  cin.ignore(9999, '\n');
  
  //arr->push_back(new Videogames(title, year, publisher, rating));
  
  cout << "Pushed!" << endl;
}

void addMusic(vector <Media*> *arr) {
  char title[20] = "";
  int year = 0;
  char artist[20] = "";
  float duration = 0.0;
  char publisher[20] = "";
  
  cout << "Title?" << endl;
  cin.get(title, 20);
  cin.clear();
  cin.ignore(9999, '\n'); 

  cout << "Artist?" << endl;
  cin.get(artist, 20);
  cin.clear();
  cin.ignore(9999, '\n');
  
  cout << "Year?" << endl;
  cin >> year;
  cin.clear();
  cin.ignore(9999, '\n');
  
  cout << "Duration?" << endl;
  cin >> duration;
  cin.clear();
  cin.ignore(9999, '\n');
  
  cout << "Publisher?" << endl;
  cin.get(publisher, 20);
  cin.clear();
  cin.ignore(9999, '\n');
  
  //arr->push_back(new Music(title, year, artist, duration, publisher));
  
  cout << "Pushed!" << endl;
}

void add(vector<Media*>* array) {
  char userInput1[10];
  cout << "What type of an array would you like to add? (MOVIE/MUSIC/VIDEOGAME)" << endl;
  cin.get(userInput1, 10);
  if (strcmp(userInput1, "MUSIC") == 0) {
    addMusic(array);
  }
  else if (strcmp(userInput1, "VIDEOGAME") == 0) {
    addVideogame(array);
  }
  else if (strcmp(userInput1, "MOVIE") == 0) {
    addMovie(array);
  }
  else {
    cout << "Invalid input" << endl;
  }
}
