#include <iostream>

using namespace std;

int main() {
  int Hours;
  int Minutes;
  int Seconds;
  int NumberOfSecs = 0;

  Seconds = NumberOfSecs;

  cout << endl << "Number of seconds: ";
  cin >> NumberOfSecs;

  Hours = NumberOfSecs / 3600;
  Minutes = NumberOfSecs / 60;
  Seconds = Hours * 3600;
  //
    cout << "Hours: " << Hours << endl;
    cout << "Minutes: " << Minutes << endl;
    cout << "Seconds: " << Seconds << endl;


}
