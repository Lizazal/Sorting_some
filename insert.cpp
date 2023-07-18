#include <iostream>
using namespace std;
int main ()
{
    cout<<"Введите размер";
    int vrem, j, n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        arr[i]=0;
        cin>>arr[i];
    }
    for (int i=1; i<n; i++)
    {
        vrem=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>vrem)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr [j+1]=vrem;
    }
    for (int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return (0);
}
