// File Processing
// Needed fstream
#include  <iostream>
#include <fstream>

using namespace std;

int main() {
char first_name[30], last_name[30];
int age;
char file_name[20];

cout << "Enter First Name: ";
  cin >> first_name;
cout << "Enter Last Name: ";
  cin >> last_name;
cout << "Enter Age: ";
 cin >> age;

cout << endl << "Enter the name of the file: ";
  cin >> file_name;
  //Create an ofstream called people, open the stream for output
  ofstream People(file_name, ios::out);
  //Write the output to the stream
  People << first_name << endl << last_name << endl << age << endl;
  People.close();
  //Creates an ifstream that reads inside the file
  ifstream People_in(file_name);
  People_in >> first_name >> last_name >> age;    // Reads

  cout << endl << "First Name: " << first_name;   // prints out
  cout << endl << "Last Name: " << last_name;
  cout << endl << "Enter Age: " << age;

  People_in.close();                              // file closed

  return 0;
}
