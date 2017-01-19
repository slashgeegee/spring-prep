// Fundamentals of Euclid's Algorithm for gcd
// Ex:
// gcd(a,b) = c; gcd(d,f) = g.
// gcd(6,4) = 2; gcd(12,18) = 6.




#include <iostream>
using namespace std;

// A non-recursive version of Euclid's algorithm

// creates a function called gcd with two integer parameters
int gcd (int a, int b) {
  int temp;                 // Codeblock starts : declared local variable int temp
  while (b != 0) {          // euclid algorithm
    temp = a % b;
    a = b;
    b = temp;
  }
  return(a);
}

int main () { // creates the main function
  int x, y;                                                             // declared two int local variables
  cout << "Enter two integers(number space number):\n";                 // prints the string then a newline
  if (!(cin >> x >> y)) {                                               // asked the user to input two numbers
    cout << "Please enter only integers" << endl;                       // prints if the user input a non-numeric number
    cin.clear();                                                        // will clear the errors
    cin.ignore();                                                       // ignore the errors then return
  } else {
    cout << "gcd(" << x << ", " << y << ") = " << gcd(x,y) << endl;     // prints the out the output of the user's two numbers , then calls the function gcd and run the formula inside
  }
  return(0);
}



/* KIRBY */
