#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int nov, min, n;
	cin >> n;
	int a[n];
	// Ввод массива
	for (int i = 0; i < n; i++)
		cin >> a[i];
	//Сортировка выбором
	for (int i = 0; i < n; i++)
	{
		min = i;
		//Поиск номера ячейки с минимальным значением
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[min])
				min = j;
		//Минимальный элемент меняем местами с текущим
		if (i != min)
		{
			nov = a[i];
			a[i] = a[min];
			a[min] = nov;
		}
	}
	//Вывод отсортированного массива
	for (int i = 0; i < n; i++)
		cout << fixed << setw(4) << a[i];
	// cout << a[i] << " ";
	return 0;
}
