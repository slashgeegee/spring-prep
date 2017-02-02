/*
 * Cat.cpp
 *
 *  Created on: Jan 30, 2017
 *      Author: bruh
 */
#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat(){

	cout << "Cat created" << endl;
	happy = true;
}

Cat::~Cat(){
	cout << "Cat destroyed" << endl;
}

void Cat::speak(){
	if(happy){
		cout << "Meow!" << endl;
	}
	else {
		cout << "Ssssss" << endl;
	}
}

Dog::Dog(){
	cout << "Dog created" << endl;
	cuddle = true;
}

Dog::~Dog(){
	cout << "Dog destroyed" << endl;
}

void Dog::bark(){
	if(cuddle){
		cout << "aw aw!" << endl;
 	}
	else {
		cout << "grrrrr" << endl;
	}
}
