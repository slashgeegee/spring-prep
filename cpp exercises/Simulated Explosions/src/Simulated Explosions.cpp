//============================================================================
// Name        : Simulated.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int color = 0x123456789;

	unsigned char red = (color & 0xFF0000) >> 16;
	unsigned char green = (color & 0x00FF00) >> 8;
	unsigned char blue= (color & 0x0000FF);

//	color: 1000101111101011110011111
//	mask: 111111110000000000000000
//	result: 100010101110000000;

	cout << hex << (int) red << endl;


	// or do the following (works for me at least!)

	unsigned char redAgain = color >> 16;

	cout << hex << (int)redAgain << endl;


	return 0;
}
