#include <bits/stdc++.h>
using namespace std;

void f(int arr[], int start, int end)
{  
    if (start >= end)
    {
        return;
    }
    swap(arr[start], arr[end]);
    f(arr, start+1 , end-1 );
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter the value"<<endl;
        cin>>arr[i];
    }
    
    f(arr,0,4);
    for (int i = 0; i < 5 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}