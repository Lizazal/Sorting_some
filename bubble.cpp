#include <iostream>
using namespace std;
int main()
{
	cout << "Введите размер";
	int vrem, n;
	cin >> n;
	int arr[n];
	for (int i = 0; i<n; i++)
	{
		arr[i] = 0;
		cin >> arr[i];
	}
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n - 1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				vrem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = vrem;
			}
		}
	}
	for (int i = 0; i<n; i++)
		cout << arr[i] << " ";
	return (0);
}
