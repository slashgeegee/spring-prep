//============================================================================
// Name        : Constructor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;

int main() {

	// Instantiation
	Person gwapo1;
	Person gwapo2("Juan");
	Person gwapo3("Lazy", 19);

	cout << gwapo1.toString() << endl;
	cout << gwapo2.toString() << endl;
	cout << gwapo3.toString() << endl;

	People nawng1;
	People nawng2("James");
	People nawng3("geez", 20);

	cout << nawng1.toFloat() << endl;
	cout << nawng2.toFloat() << endl;

	return 0;
}


