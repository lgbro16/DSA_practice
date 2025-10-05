#include<bits/stdc++.h>
using namespace std ;
int reverse(int x){
    int temp =x;
    int j=0;
while (temp>0)
{   
    temp=temp/10;
    j++;
}//i is number of digits.
int r = 0;
 for (int i = 1; i <= j; i++)
{
    int last = x%10;
         x=x/10;
    r = r +(last *int(pow(10,j-i)));
}
    return r;
}
bool isPalindrome(long int x) {
        long int temp = x;
        long int r = 0;
        int last;
        while(temp>0){
        last = temp%10;
        temp=temp/10;
        r = (10*r) + last; 
        }
        if (r==x)
        {
            return true;
        }
        else if (x<0)
        {
            return false;
        }
        else
        {
            return false;
        }
        
    }

void divisors(int x){

   for (int i = 1; i <= x; i++)
   {
    if (x%i==0)
    {
       cout<<i<<" ";   
    }
    
   }
    
}
int main(){
//  int a = reverse(1534236469);
//  cout<<a;
// bool a=isPalindrome(-121)
int n;
cin>>n;
divisors(n);
return 0;
}