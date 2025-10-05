#include<bits/stdc++.h>
using namespace std ;
//Find the number of digits in a number n:
int main(){
int n;
cout<<"Enter your number"<<endl;
cin>>n;
int i=0;
while (n>0)
{   
    n=n/10;
    i++;
}
cout<<"The number of the digits in n is "<<i<<endl;
return 0;
}
