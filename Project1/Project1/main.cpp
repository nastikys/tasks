#include "students.h"

int main()
{
	Students students;
	students.LoadCSV("students.csv");//????????? ?????? ? ??????
	students.SortStudentsByRating();//?????? ?? ??????? ???????
	students.PrintCSV(); //????? ?? ?????
	students.SaveCSV("ratings.csv", ',');//????????? ? ????
	system("pause");
	return 0;
}
