#include<bits/stdc++.h>
using namespace std ;
int majority(vector<int> &nums){
int cnt =0,ele;
for(int i=0;i<nums.size();i++){
  if(cnt==0){
    cnt=1;
    ele=nums[i];
  }
  else if(nums[i]==ele){
    cnt++;
  }
  else{
    cnt--;
  }
  for (int i = 0; i < nums.size(); i++)
  { int cnt1;
    if(nums[i]==ele){
        cnt1++;
    }
    if(cnt1>(nums.size())/2){
      return ele;
    }
  }
  return -1;
}}
int main()
{ vector<int> nums ={3,3,3,4,3,3,4,2,2,3};
 int k = majority(nums);

cout<<k;
return 0;
}