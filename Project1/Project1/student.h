#pragma once
#include <string>
#include <array>

using namespace std;

class Student
{
public:
	Student(const string& line); //настроить ВС, конструкторы,
	const string& Surname() const { return surname; }
	double AvgRatings() const;
	bool IsValid() const;
protected:
	string surname;
	array <int,5> ratings;
	bool isContract;
};
