/*
 * Person.h
 *
 *  Created on: Jan 31, 2017
 *      Author: bruh
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person(): name(""), age(0) {}; // Constructor
	Person(string name, int age): name(name), age(age){};
	string toString();
};

#endif /* PERSON_H_ */
