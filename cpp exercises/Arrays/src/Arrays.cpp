//============================================================================
// Name        : Arrays.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string txt = "hello";
	char text[] = {'h','e','l','l','o','!'};

	cout << txt << endl;
	cout << text << endl;

	for(int i = 0; i < sizeof(text); i++){
		cout << i << ";" << text[i] << endl;
	}
	return 0;
}
