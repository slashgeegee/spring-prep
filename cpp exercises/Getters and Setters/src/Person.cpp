/*
 * Person.cpp
 *
 *  Created on: Jan 30, 2017
 *      Author: bruh
 */
#include <iostream>
#include "Person.h"

using namespace std;

Person::Person() {
	// TODO Auto-generated constructor stub
	name = "George";
}

string Person::soString() {
	return "Person's name is: " + name;
}


void Person::setName(string newName){
	name = newName;
}

string Person::getName(){
	return name;
}
