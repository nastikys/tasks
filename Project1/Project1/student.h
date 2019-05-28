#pragma once
#include <string>
#include <array>

using namespace std;

class Student
{
public:
	Student(const string& line, char sep = ',');
	const string& Surname() const { return surname; }
	double AvgRatings() const;
	bool IsValid() const;
protected:
	void ParseLine(const string&, char);

	string surname;
	array <int,5> ratings;
	bool isContract=true;
};
