#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
void name()
{
    if (cnt == 5)
    {
        return;
    }
    else
    {
        cout << "Lakshay" << endl;
        cnt++;
        name();
    }
}
int i = 1;
int sum = 0;
int product =1;
int sumnaturals(int x)
{
    if (i > x)
    {
        return sum;
    }
    sum = sum + i;
    i++;
    sumnaturals(x);
}

int factorial(int n){
if(n==1){
    return 1;
}
  product = n * factorial(n-1);
  return product;
}
int main()
{
    // int a = factorial(10);    
    // cout << a;
   string s = "Lakshay";
   cout<<s[-1];
   cout<<log10(5);
    return 0;
}