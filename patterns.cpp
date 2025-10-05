#include <bits/stdc++.h>
using namespace std;
void sqaure(int n)

{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void triangle(int x)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void numtriangle(int x)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void reversetri(int x)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void invpyramid(int x)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x-i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 *  i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j <x-i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void fullpyramid(int x)
{

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x-i-1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 *  i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j <x-i-1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

     for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * (x - i) - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    
}

int main()
{
    int n;
    cout << "Enter the input value" << endl;
    cin >> n;
    // sqaure(n);
    fullpyramid(n);
    return 0;
}