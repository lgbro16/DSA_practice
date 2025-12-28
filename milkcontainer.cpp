/*let x1,2,3, be the max capacity of the container and y be the current milk level of the container.
x1,2,3>=y1,2,3
pour 1
if y1+y2>x2 then: y2= y2 + (x2-y2)
y1=y1-(x2-y2) , now if y3+y2>x3 then: y3= y3 + (x3-y3)
y2=y2-(x3-y3)
Z number of pours.....
Cycle of 3 is repeated then : if z//3 = 0 cycle finished output same 
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{ 	int t;
	cin>>t;
	for(int i; i< t;i++){
	    int n,x;
        int total;
	    cin>>n>>x;
	    int groups = n/6;
	    if(n%6 > 0){
          total = x * (groups+1);
        }
        else{
            total=x*groups;
        }
        cout<<total<<endl; 
	}

   return 0;
}