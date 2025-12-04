#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
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
void bubble_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = 0; j <= n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
        cout << "The sorted array is::" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << endl;
        }
    }
}
void merge(int arr[], int l, int mid, int r)
{
    vector<int> temp;
    int left = l;
    int right = mid + 1;
    while (left <= mid && right <= r)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= r)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = l; i <= r; i++)
    {
        arr[i] = temp[i - l];
    }
    for (int i = 0; i <= r; i++)
    {
        cout << arr[i] << endl;
    }
}
void merge_sort(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int mid = (l + r) / 2;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid + 1, r);
    cout<<"The sorted array is::"<<endl;
    merge(arr, l, mid, r);
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
    merge_sort(arr, 0, n - 1);
    return 0;
}