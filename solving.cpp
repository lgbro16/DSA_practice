#include<bits/stdc++.h>
using namespace std ;
int subarraySum(vector<int>& nums, int k) {
        int cnt=0;int sum=0;
        for(int i=0;i<nums.size();i++){
           sum =0;
            sum+=nums[i];
            if(sum==k){cnt++;}
        else{for(int j=i+1;j<nums.size();j++){
            if(sum<k || nums[j]<=0){
                sum+=nums[j];
            }if(sum==k){cnt++;sum=0;}
        }
        }}
    return cnt;}
int main(){
vector<int> nums{1,-1,0};
int x = subarraySum(nums,0);cout<<x;
return 0;
}