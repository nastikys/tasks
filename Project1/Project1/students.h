#pragma once

#pragma once

#include "student.h"
#include <vector>

using namespace std;

class Students//?????
{
public:
	Students() = default;

	void LoadCSV(const string& filename, char sep = ',');
	void SaveCSV(const string& filename, char sep = ',');
	void PrintCSV(char sep = ',');
	void PrintAllUsers(char sep = ',');
	void SortStudentsByRating();
protected:
	void ReserveSize(ifstream&);
	void ParseStudent(const string& line);

	vector<Student> potok;	//create array students
	char sep = ',';//???? ??????????
	int sizeTable;//??? ???????( ????? )
};