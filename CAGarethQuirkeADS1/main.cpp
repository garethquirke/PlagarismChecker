#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
using namespace std;


/************************
Gareth Quirke elapsed CA1 
X00108966 

Plagarism checker
************************/

int main() {

	cout << "This is a plagarism checker by Gareth Quirke \n";
	cout << "\n" << endl;

	DIR * caDirectory = NULL;

	//used when reading a directory
	struct dirent*pent = NULL;

	caDirectory = opendir(".");

	//check if directory to be scanned was initialised 
	if (caDirectory == NULL) {
		cout << "Directory was not initialied correctly";
		exit(0);
	}


	closedir(caDirectory);


	system("pause");
	return 0;
}

