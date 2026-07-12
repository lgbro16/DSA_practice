#include<bits/stdc++.h>
using namespace std ;
long long maximumScore(vector<int>& nums) {
        long long score = INT_MIN;
        for(int i=0;i<nums.size();i++){
            long long ps=0;int sm=0;
            for(int j=i;j>=0;j--){
                ps=ps+nums[j];
            }
            int mini=INT_MAX;
            for(int j = i+1;j<nums.size();j++){
                mini = min(mini,nums[j]);
            }
        score = max(score,ps-mini);
        }return score;
    }
//Find the number of digits in a number n:
int main(){
// int n;
// cout<<"Enter your number"<<endl;
// cin>>n;
// int i=0;
// while (n>0)
// {   
//     n=n/10;
//     i++;
// }
// cout<<"The number of the digits in n is "<<i<<endl;
vector<int> nums ={10,-1,3,-4,-5};
cout<<maximumScore(nums);
int n ; cin>>n;
int i=0;
while (n>0)
{   
    n=n/10;
    i++;
}
cout<<"The number of the digits in n is "<<i<<endl;
return 0;
}
