#include <iostream>
using namespace std;


// Global Variables
int a = 18;
int b = 6;


// Assigns a and b to the incoming parameters
int function1(int a, int b) {
  return a - b;
}


// Function that adds the global variables
int function2() {
  int c;        // Local Variable C
  c = a + b;    // Adds the two global variables
  return c;     // Returns c, c is no longer available once this function executes
}

int main() {
  int b = 12; //overrides the global variable b
  int c = 0;  //initialized c = 0
  a = function1(b, a); // now a calls function1 interchange the statement to b-a
  c = function2(); // calls function2 which the new value of a overrides the global variable
  cout << "a: " << a << " b: " << b << " c: " << c << endl;
}
