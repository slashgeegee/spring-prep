#include <iostream>

using namespace std;

int main() {
int Assignment_one, Assignment_two, Assignment_three, Assignment_four;
int Midterm_Exam;
int Final_Exam;
int Class_Participation;


//
float Final_Grade;
float Assignments;
float Midterm;
float Final;
float Participation;
float Average_Score;
float Average;
//
float MidtermR;
float FinalR;
float ParticipationR;


Assignments = 0.4; // 40%
Midterm = 0.15; // 15%
Final = 0.35; // 35%
Participation = 0.1; // 10%

// Assignment
cout << "Enter the score for the first assignment: ";
  cin >> Assignment_one;
cout << "Enter the score for the second assignment: ";
  cin >> Assignment_two;
cout << "Enter the score for the third assignment: ";
  cin >> Assignment_three;
cout << "Enter the score for the fourth assignment: ";
  cin >> Assignment_four;
//
  // Midterm && Final
  cout << "Enter the score for the midterm: ";
    cin >> Midterm_Exam;
  cout << "Enter the score for the final: ";
    cin >> Final_Exam;
  cout << "Enter the score for the section grade: ";
    cin >> Class_Participation;

    Average = (Assignment_one + Assignment_two + Assignment_three + Assignment_four)/ 4;
    Average_Score = Average * Assignments;

    MidtermR = Midterm_Exam * Midterm;
    FinalR = Final_Exam * Final;
    ParticipationR = Class_Participation * Participation;

    Final_Grade = MidtermR + FinalR + ParticipationR + Average_Score;

    cout << "The final grade is: " << Final_Grade << endl;

  //

  return 0;

}
