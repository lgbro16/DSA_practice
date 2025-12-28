#include <bits/stdc++.h>
using namespace std;
vector<int> dnfsort(vector<int> &nums){
    int low =0,mid=0,high=nums.size()-1;
    while(mid<=high)
    {
    if(nums[mid]==0){
         swap(nums[mid],nums[low]);
         low++;
         mid++;
    }
    else if(nums[mid]==1){
        mid++;
    }
    else{
        swap(nums[mid],nums[high]);
        high--;
    }}
    return nums;
}
void moveZeroes(vector<int>& nums) {
            int j=-1;
            for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                j=i;
                break;
            }}
            if(j!=-1){
            for(int i=j+1;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }}}
        
    }
int remove_duplicates(vector<int> &nums)
{int i=0;
        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[i]!=nums[j])
            {
                nums[i+1]=nums[j];
                i++;
            }
        }
return i+1;
}
int largestElement(vector<int> &nums)
{
    int largest = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
        }
    }
    return largest;
}
int main()
{//010211012 yha 0 mid pe tha aur 2 high pe aur ab jb mid ++ aur low++ hoga swap ke sath
    
    // cout << largestElement(nums);
    // int  unique=remove_duplicates(nums1);
    // cout<<unique;
    // for (int i = 0; i < nums1.size(); i++)
    // {
    //     cout<<nums1[i]<<" 
    // }
    // moveZeroes(nums1);
    // for (int i = 0; i < nums1.size(); i++)
    // {
    //     cout<<nums1[i]<<" ";
    // }
    vector<int> nums = {0,1,0,0,2,1,1,0,1,2};
    vector<int> nums1 = dnfsort(nums);
for (int i = 0; i < nums1.size(); i++)
{
    cout<<nums1[i]<<' ';
}
 
    return 0;
}