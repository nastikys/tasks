#include <fstream>
#include <iostream>
#include <vector>
#include <locale>;
#include "windows.h";

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	ifstream inputFile("students.csv");
	string line;
	while (!inputFile.eof())
	{
		getline(inputFile,line);
		cout << line << endl;
	}
	inputFile.close();


	system("pause");
	return 0;
}
