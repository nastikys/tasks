#pragma once
#include <string>
#include <array>

using namespace std;

class Student
{
public:
	Student();
	Student(const string& line, char sep = ',');

	const string&	Surname()				const { return surname; }
	bool			IsContract()			const { return isContract; }
	double			AvgRatings()			const;
	bool			IsValid()				const;
	void			ParseLine(const string& line, char sep = ',');//чтение
	string			Dump(char sep = ',')	const;//запись
	string			DumpCSV(char sep = ',')	const;//
protected:
	string surname;
	array <int,5> ratings; //массив оценок 5
	bool isContract=true;
};

bool StudentsRatingComparer(Student&, Student&);