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
	int age;
public:
	Person();
	Person(string newName) {name = newName; age = 0;};
	Person(string newName , int newAge);
	string toString();
};

class People {
private:
	string nickname;
	int years;
	float salary;
public:
	People();
	People(string newNickname) { nickname = newNickname; years = 0; salary = 0;};
	People(string newNickname, int newYears, float newSalary);
	string toFloat();
};

#endif /* PERSON_H_ */
