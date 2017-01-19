// Modified Version Wherein the user can input as many data as he/she like
// File Processing

/* KIRBY */

#include <fstream>
#include <iostream>

using namespace std;

int main () {
  // Local Variables
  char first_name[30], last_name[30];
  int age;
  char file_name[20];
  char done;

  cout << endl << "Enter file name: ";
  cin >> file_name;
  // Creates an ofstream called People that open the stream to write the output
  ofstream People(file_name, ios::out);
  // Asked the User Data
  cout << endl << "Enter data: " << endl;
  // Loop that Collects Data
  while(1){
    cout << "Enter First Name: ";
      cin >> first_name;
    cout << "Enter Last Name: ";
      cin >> last_name;
    cout << "Enter Age: ";
      cin >> age;

      People << first_name << endl << last_name << endl << age << endl;

      // if User wants to continue to input data
      cout << "Continue? y/n " << endl;
        cin >> done;
        if(done == 'n')
          break;

  }
  People.close();

  ifstream People_in(file_name);

  while(1){
    People_in >> first_name >> last_name >> age;
    if (People_in.eof())
    break;

    cout << endl << "First Name: " << first_name;
    cout << endl << "Last Name: " << last_name;
    cout << endl << "Enter Age: " << age;
    cout << endl;
  }
  People_in.close();
  return 0;
}
