#include <fstream>
#include <iostream>
#include <vector>
#include <locale>
#include <windows.h>
#include "student.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	ifstream inputFile("students.csv");
	string line;
	char sep = ',';
	int counter = 0;
	int id = 0;
	getline(inputFile, line);

	counter = stoi(line);
	while (!inputFile.eof())
	{
		getline(inputFile, line);
		Student test(line);
		cout << test.IsValid() << "\t" << test.AvgRatings() << endl;
	//	cout << line << endl;
	}
	inputFile.close();


	system("pause");
	return 0;
}
