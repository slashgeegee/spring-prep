/*
 * Person.cpp
 *
 *  Created on: Jan 30, 2017
 *      Author: bruh
 */

#include "Person.h"
#include <sstream>

Person::Person() {
	name = "undefined";
	age = 0;

}

Person::Person(string newName , int newAge){
	name = newName;
	age = newAge;
}

string Person::toString(){
	stringstream ss;

	ss << "Name: " ;
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}

People::People(){
	nickname = "unknown";
	years = 0;
	salary = 90;

}

People::People(string newNickname, int newYears, float newSalary) {
	nickname = newNickname;
	years = newYears;
	salary = newSalary;
}

string People::toFloat(){
	stringstream zz;

	zz << "Nickname: ";
	zz << nickname;
	zz << "Years: ";
	zz << years;
	zz << "Salary: ";
	zz << salary;

}

