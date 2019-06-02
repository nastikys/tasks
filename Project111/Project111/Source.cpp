#include<iostream> 
#include<ctime>
#include<cmath>

using namespace std;
void shellsort(int x[], int n)         //SHELL SORT - SHELL'S INCREMENTS
{
	int i, j, k, increment, temp;
	int swp = 0, comp = 0; increment = n / 2;
	while (increment > 0)
	{
		for (i = 0; i < increment; i++)
		{
			for (j = 0; j < n; j += increment)
			{
				temp = x[j];
				for (k = j - increment; k >= 0 && temp < x[k]; k -= increment)
				{
					comp++;
					swp++;
					x[k + increment] = x[k];
				}
				x[k + increment] = temp;
				swp++;
			}
		}
		comp++;
		if (increment / 2 != 0)
			increment = increment / 2;
		else if (increment == 1)
			increment = 0;
		else
			increment = 1;
	}
}
void hibbardsort(int x[], int n)       //SHELL SORT - HIBBARD'S INCREMENTS
{
	int i, j, k, increment, temp;
	int swp = 0, comp = 0;
	int val;
	val = (int)log(n + 1) / log(2);
	increment = (int)pow(2, val) - 1;
	// increment =(int)9* pow(4,n)- 9* pow(2,n);
	while (increment > 0)
	{
		for (i = 0; i < increment; i++)
		{
			for (j = 0; j < n; j += increment)
			{
				temp = x[j];
				for (k = j - increment; k >= 0 && temp < x[k]; k -= increment)
				{
					comp++;
					swp++;
					x[k + increment] = x[k];
				}
				x[k + increment] = temp;
				swp++;
			}
		}
		comp++;
		val--;
		if (increment != 1)
			increment = pow(2, val) - 1;
		else
			increment = 0;
	}
}
int main()
{

	int n = 20000;                          //число элементов

	int *arr = new int[n];                  //создание массива из n элементов
	int *brr = new int[n];
	for (int i = 0; i < n; i++)             //инициализируем массив
	{
		arr[i] = rand();
		brr[i] = arr[i];
	}
	double time1 = clock() / 1000.0;
	shellsort(arr, n);
	double time2 = clock() / 1000.0;

	cout << "\nTime shellsort: " << time2 - time1;

	time1 = clock() / 1000.0;
	hibbardsort(brr, n);
	time2 = clock() / 1000.0;

	cout << "\nTime hibbardsort: " << time2 - time1 << endl;
	delete[] arr;
	//сложность алгоритма Шелла составляет O(N^2)
	//сложность алгоритма предложенная Хиббардом - O(N ^ 3 / 2), т.е.его сложность меньше и скорость выше
	system("pause");
	return 0;
}
