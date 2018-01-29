// BookCipherEncoderDecoder.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int count = 0;
	int exampleNumToFind = 12;
	string str;

	ifstream inFile;

	inFile.open("test.txt");
	if (!inFile) {
		cout << "Unable to open file";
		exit(1);
		//will terminate process with error
	}

	while (inFile >> str) {
		count = ++count;
		if (count == exampleNumToFind) {
			cout << str.at(0) << endl;
		}
	}

	inFile.close();

	return 0;
}
