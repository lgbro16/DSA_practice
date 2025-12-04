/*let x1,2,3, be the max capacity of the container and y be the current milk level of the container.
x1,2,3>=y1,2,3
pour 1
if y1+y2>x2 then: y2= y2 + (x2-y2)
y1=y1-(x2-y2) , now if y3+y2>x3 then: y3= y3 + (x3-y3)
y2=y2-(x3-y3)
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    int x1=10, x2=11, x3=12;
    int y1=3, y2=4, y3=5;

       for (int  i = 0; i < count; i++)
       {
        if (y1 + y2 >= x2)
        {
            y2 = x2;
            y1 = y1 - (x2-y2);
        }
       else 
       {y2 = y2 + y1;
        y1 = 0;}
       }
        // if (y2 + y3 >= x3)
        // {   
        //     y2 = y2 - (x3-y3);
        //     y3 = x3;
            
        // }
        // else 
        // {y3 = y2 + y3;
        // y2 = 0;}

        // if (y1 + y3 >= x1)
        // {
        //     y3 = y3 - (x1-y1);
        //     y1 = x1;
            
        // }
        // else{y1 = y3 + y1;
        // y3 = 0;}
    
   cout<<"THE MILK LEFT IN THE CONTAINERS ARE "<<y1<<" "<<y2<<" "<<y3<<endl;
    return 0;
}