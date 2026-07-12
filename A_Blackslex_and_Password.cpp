#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        int cnt = 0;
        cin >> x >> y;
        while (x != 0 || y != 0)
        {
            if (y == 0)
            {
                x--;
                cnt++;
            }
            else if (x == 0)
            {
                y--;
                x++;
                cnt++;
            }
            else
            {
                y--;
                x--;
                cnt++;
            } 
        }if(cnt%2==1){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }
   }
    return 0;
}