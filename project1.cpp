#include <iostream>

using namespace std;



int main() {
int Chirps;
int temperature;

cout << endl << "Number of Chirps: ";
cin >> Chirps;
  temperature = (40 + Chirps)/4;
  cout << "The temperature is: " << temperature << endl;

  return 0;
}
