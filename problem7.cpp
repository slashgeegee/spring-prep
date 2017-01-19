// A program to decide the best of three methods of compensation
#include <iostream>

using namespace std;

// Constants
#define kShoeCost 225         //average price of shoes per pair
#define kSalaryPerWeek 600    // salary per week Method 1
#define kSalaryPerHour 7.0      // salary per hour Method 2
#define kHoursPerWeek 40      // number of working hours - Method 2
#define kCommission1 0.10     // first commision percentage - Method 2
#define kCommission2 0.2     // second commision percentage - Method 3
#define kEachPairSold 20      // bonus amount per pair sold


// A function that gets the weekly shoe sales
int GetSalaryWeekly() {
  int pairs;

  cout << "Enter number of pairs sold per week: ";
  if(!(cin >> pairs)){
    cout << "Numbers Only" << endl;
    return 0;
  }
  else {
    return pairs;
  }
}

// Option 1 Which is always $600 per week
void CalcOption1() {
  cout << "Option 1: " << kSalaryPerWeek << endl;
}

// Option 2 Which is Perhour + 10% Commision
void CalcOption2(int Sales){
  double PerHour, TotalPay, Commission;

  PerHour = kSalaryPerHour * kHoursPerWeek;
  Commission = (Sales * kShoeCost) * kCommission1;
  TotalPay = PerHour + Commission;

  cout << "Option 2: " << TotalPay << endl;
}


// Option 3
void CalcOption3(int Sales){
  int Extra;
  double TotalPay, Commission;


  Extra = kEachPairSold * Sales;
  Commission = (Sales * kShoeCost) * kCommission2;
  TotalPay = Extra + Commission;

  cout << "Option 3: " << TotalPay << endl;
}

main() {
  int WeeklySales;

  WeeklySales = GetSalaryWeekly();
  if (WeeklySales == 0)
    return 0;

    CalcOption1();
    CalcOption2(WeeklySales);
    CalcOption3(WeeklySales);

}
