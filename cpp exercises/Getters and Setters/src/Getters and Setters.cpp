//============================================================================
// Name        : Getters.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;

int main() {

	Person person;

	person.setName("Georgina");

	cout << person.soString() << endl;
	cout << "Name of person with get method: " << person.getName() << endl;
	return 0;
}
