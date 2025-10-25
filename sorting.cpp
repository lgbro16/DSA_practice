#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n ){
for (int i = 0; i <= n - 2; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
 cout << "THE SORTED ARRAY IS ::" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements in the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   selection_sort(arr,n);
    return 0;
}