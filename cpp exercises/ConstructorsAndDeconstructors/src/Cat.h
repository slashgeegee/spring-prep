/*
 * Cat.h
 *
 *  Created on: Jan 30, 2017
 *      Author: bruh
 */

#ifndef CAT_H_
#define CAT_H_

class Cat {
private:
	bool happy;
public:
	void speak();
	Cat(); // Constructor
	~Cat(); // Deconstructor
};

class Dog {
private:
	bool cuddle;
public:
	void bark();
	Dog();
	~Dog();
};

#endif /* CAT_H_ */
