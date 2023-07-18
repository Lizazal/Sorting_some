#include <iostream>
using namespace std;
int f, l, n, t, i, s;
void qsort (int*mas, int I, int j)
{
	cout<<”Введите размер”;
	cin>>n;
	int arr [n];
	for (i=0; i<n; i++)
		cin>>arr[i];
	i=f;
	j=l;
	int tmp;
	t=mas[(f+l)/2];
	while (i<=j)
	{
		while (mas[i]<t)
			i++;
		while (mas[j]>t)
			j--;
		if (i<=j)
		{
			tmp=mas[j];
			mas[j]=mas[i];
			mas[i]=tmp;
			i++;
			j++;
		}
		if (f<j) void qsort (int*mas, int i, int j);
		if (i>l) void qsort (int*mas, int i, int j);
	}
	for (i=0; i<t; i++)
		cout<<arr[i];
}
int main (int i, int n)
{
	cout<<”Введите размер”;
	cin>>n;
	int*A=new int [n];
	for (int i=0; i<n; i++)
	{
		cout<<”Элемент”<<i+1;
		cin>>A[i];
	}
	qsort (A, 0, n-1);
	cout<<A, n;
	for (int i=0; i<n; i++)
		cout<<A[i]<<” “;
	delete []A;
	system (“pause”);
}
