//============================================================================
// Name        : Pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void manipulate(double *pValue){
	cout << "2. Value of double in manipulate: " << *pValue << endl;
	*pValue = 10;
	cout << "3. Value of double in manipulate: " << *pValue << endl;
}

int main() {

	int nValue = 8;

	// Pointer
	// Point to int Value
	int *pnValue = &nValue;

	//*pnValue = 6;

	cout << "Int Value: " << nValue << endl;
	cout << "Pointer to int address: " << pnValue << endl;
	cout << "Int value via a pointer:  " << *pnValue << endl;

	cout << "=======================" << endl;

	double dValue = 123.4;

	cout << "1. dValue: " << dValue << endl;
	manipulate(&dValue);
	cout << "4. dValue: " << dValue << endl;

	return 0;
}
