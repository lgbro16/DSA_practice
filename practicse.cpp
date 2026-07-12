#include<bits/stdc++.h>
using namespace std ;

int main(){
vector<vector<int>> nums = {{1,1,0},{1,0,0},{0,0,0}};

for(int i=0;i<nums.size();i++){
  reverse(nums[i].begin(),nums[i].end());
}
cout<<nums[1][0];
return 0;
}