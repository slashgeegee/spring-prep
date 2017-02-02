/*
 * Cat.cpp
 *
 *  Created on: Jan 29, 2017
 *      Author: bruh
 */
#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak(){

	if(happy){
		cout << "Meow" << endl;
	}
	else{
		cout << "SsssSS" << endl;
	}

}

void Cat::makeHappy(){
	happy = true;
}

void Cat::makeSad(){
	happy = false;
}
