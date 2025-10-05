#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Hashing is used to find the number of occurences of a specific digit or alphabet in a string or number..
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value" << endl;
        cin >> arr[i];
    }
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    int q;
    cout << "Enter the number of test values" << endl;
    cin >> q;
    int number;
    while (q--)
    {
        cout << "Enter the number" << endl;
        cin >> number;
        cout << hash[number]<<endl;
    }

    return 0;
}