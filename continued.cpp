#include <bits/stdc++.h>
using namespace std;
void fulltri(int x)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x - i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern4(int x)
{
    int space = 2 * (x - 1);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << (i - j) + 1;
        }
        cout << endl;
        space = space -2;
    }
}
int main()
{
    int n;
    cout << "Enter the input" << endl;
    cin >> n;
    pattern4(n);
}