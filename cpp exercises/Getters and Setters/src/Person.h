/*
 * Person.h
 *
 *  Created on: Jan 30, 2017
 *      Author: bruh
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>

using namespace std;

class Person {
private:
	string name;
public:
	Person();
	string soString();
	void setName(string name);
	string getName();
};

#endif /* PERSON_H_ */
