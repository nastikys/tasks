#include "student.h"
#include <iostream>
Student::Student(const string& line, char sep)
{
	for (int i = 0; i < ratings.size(); ++i)
	{
		ratings[i] = -1;
	}
	ParseLine(line, sep);

}

double Student::AvgRatings() const
{
	double sum = 0.0;
	for (int i = 0;i<ratings.size(); ++i)
	{
		sum = sum + ratings[i];
	}
	return sum / ratings.size();
}


bool Student::IsValid() const
{
	for (int i = 0; i < ratings.size(); ++i)
	{
		if (ratings[i] < 0 || ratings[i] > 100)
			return false;
	}
	return !surname.empty();
}

void Student::ParseLine(const string& line, char sep)
{
	string l = line;
	int counter = 0;//??????? ????????
	int id = 0;
	while (counter < ratings.size() + 1 && (id = l.find(sep)) != -1)
	{
		if (counter == 0)
		{
			surname = l.substr(0, id);
			l.erase(0, id + 1);
			//cout << l << endl;
		}
		else if (counter >= 1 && counter <= ratings.size())
		{
			ratings[counter - 1] = stoi(l);
			l.erase(0, id + 1);
		//	cout << l << endl;
		}
		counter++;
	}
	isContract = (l.find("TRUE") != -1) ? true : false; //???? ????????
	/*if(l.find("TRUE")!=-1)
	{
		isContract = true;
	}
	else
	{
		isContract = false;
	}*/
}




