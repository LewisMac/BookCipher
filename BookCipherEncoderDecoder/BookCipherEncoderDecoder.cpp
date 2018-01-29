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
	int ints;
	int codeNumbs[5];

	ifstream numFile;
	
	numFile.open("numTest.txt");
	if (!numFile) {
		cout << "Unable to open number file";
		exit(1);
		//will terminate process with error
	}

	while (numFile >> ints) {
		codeNumbs[count] = ints;
		count = ++count;
		cout << ints << endl;
	}

	numFile.close();

	count = 0;


	ifstream textFile;

	textFile.open("test.txt");
	if (!textFile) {
		cout << "Unable to open file";
		exit(1);
		//will terminate process with error
	}

	while (textFile >> str) {
		count = ++count;
		if (count == exampleNumToFind) {
			cout << str.at(0) << endl;
		}
	}

	textFile.close();

	cout << codeNumbs[3] << endl;

	return 0;
}
