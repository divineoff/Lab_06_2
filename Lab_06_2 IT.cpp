#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void CREATE(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void PRINT(int* a, int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int SORT(int* a, int size)
{
	for (int i = 0; i < size - 1; i++) // індекс початку невпорядкованої частини
	{
		int max = a[i]; // пошук максимального елемента
		int imax = i; // невпорядкованої частини
		for (int j = i + 1; j < size; j++)
			if (max < a[j])
			{
				max = a[j];
				imax = j;
			}
		a[imax] = a[i]; // обмін місцями максимального та першого
		a[i] = max; // елементів невпорядкованої частини
	}
	return 0;
}

int main()
{
	srand((unsigned)time(NULL));

	const int n = 21;
	int a[n];

	int Low = -20;
	int High = 37;

	CREATE(a, n, Low, High);
	PRINT(a, n);
	SORT(a, n);
	PRINT(a, n);

	return 0;
}