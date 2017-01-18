#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main () {
  int random_number, guess;

  // Initialize random seed.
  srand (time(NULL));

  // Generate random number between 1 and 100
  random_number = rand() % 100 + 1;
  // Prints out the string "Guess or number (1 to 100)"
  cout << "Guess our number (1 to 100) ";
  do {
    if (!(cin >> guess)) {                                          // asked the user to input
      cout << "Please enter only numbers" << endl;                  // Prints out the string the the cin = standard input  which is guess variable
    } else {
      if (random_number < guess)                                    // if the user's guess is less than the random_number
       cout << "The secret number is lower than " << guess << endl; // prints out the string and user's guess
      else if (random_number > guess)                               // if the user's guess is greater than the random_number
       cout << "The secret number is higher than " << guess << endl; // prints out the string and user's guess
    }
  }
  while (random_number != guess);                                   // Creates a lopp if the user's guess is not equal to the random number it keeps looping until the user can guess it
  cout << "Congratulations!" <<  endl;                              // prints out the string congratulations if the user guess is the random_number
  return 0;
}



/*
Decomposition = breaking a task into sub-tasks
Is really important in computer science */


/* A simple game practice by KIRBY wherein the user guess the random number generated. */
