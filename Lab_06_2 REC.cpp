#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void CREATE(int* a, const int size, const int Low, const int High, int i)
{
		a[i] = Low + rand() % (High - Low + 1);
		if (i < size - 1)
			CREATE(a, size, Low, High, i + 1);
}
void PRINT(int* a, int size, int i)
{
	if (i < size)
	{
		cout << setw(4) << a[i];
		PRINT(a, size, i + 1);
	}
	else
		cout << endl;
}
int SORT(int* a, int size, int i)
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
		if (i < size - 2)
			SORT(a, size, i + 1);
		else
	return 0;
}

int main()
{
	srand((unsigned)time(NULL));

	const int n = 21;
	int a[n];

	int Low = -20;
	int High = 37;

	CREATE(a, n, Low, High, 0);
	PRINT(a, n, 0);
	SORT(a, n, 0);
	PRINT(a, n, 0);

	return 0;
}