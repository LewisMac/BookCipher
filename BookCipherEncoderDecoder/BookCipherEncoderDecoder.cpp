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
	int codeNumbs[7];

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
		//cout << ints << endl;
	}

	numFile.close();

	count = 1;


	ifstream textFile;

	textFile.open("test.txt");
	if (!textFile) {
		cout << "Unable to open file";
		exit(1);
		//will terminate process with error
	}

	while (textFile >> str) {
		for (int i = 0; i < sizeof(codeNumbs)/sizeof(codeNumbs[0]); ++i) {
			//cout << codeNumbs[i] << endl;
			if (codeNumbs[i] == count) {
				cout << codeNumbs[i] << endl;
				cout << str.at(0) << endl;
			}
		}
		count = ++count;
	}

	textFile.close();

	/*
	cout << codeNumbs[0] << endl;
	cout << codeNumbs[1] << endl;
	cout << codeNumbs[2] << endl;
	cout << codeNumbs[3] << endl;
	cout << codeNumbs[4] << endl;
	cout << codeNumbs[5] << endl;
	cout << codeNumbs[6] << endl;
	*/

	return 0;
}
