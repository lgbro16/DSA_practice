#include <bits/stdc++.h>
using namespace std;
int maxconsecutiveones(vector<int> &nums){
int max=0,cnt=0;
  for (int i = 0; i < nums.size(); i++)
  {
       if(nums[i]==1){
        cnt++;
        if(cnt>=max){
        max=cnt;}
       }
       else if (nums[i]!=1)
       {
         cnt=0;
       }
       
  }
  return max;
}
vector<int> intersectionfinder(vector <int> &nums1,vector <int> &nums2){
int n1= nums1.size();
int n2= nums2.size();
vector<int> intersection;
int j =0;                  //First try me khud bna diya!!

for (int i = 0; i < n1; i++)
{
    while (nums2[j]<=nums1[i] && j<n2)
    {
        if(nums2[j]==nums1[i]){
            intersection.push_back(nums2[j]);
            j++;
            break;
        }
        else{
        j++;}
    }

}
return intersection;
}
int uniquecounter(vector<int> &nums)
{
    int i = 0;
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[i] != nums[j])
        {
            nums[i + 1] = nums[j];
            i++;
        }
    }
    nums.erase(nums.begin() + i + 1, nums.end());
    return i + 1;
}
vector<int> unionfinder(vector<int> &nums1, vector<int> &nums2)
{
    int i=0, j = 0;
    int n1 = nums1.size();
    int n2 = nums2.size();
    vector<int> unionarr;
    while (i < n1 && j < n2)
    {   if (nums1[i] <= nums2[j])
        {
            if (unionarr.size() == 0 || unionarr.back()!=nums1[i])
            {
                unionarr.push_back(nums1[i]);
            }
            i++;
        }
        if (nums1[i] > nums2[j])
        {
            if (unionarr.size() == 0 || unionarr.back()!=nums2[j])
            {
                unionarr.push_back(nums2[j]);
            }
            j++;
        }
    }
    while (j < n2)
    {
        if (unionarr.size()==0||unionarr.back() != nums2[j])
        {
            unionarr.push_back(nums2[j]);
        }
        j++;
    }
    while (i < n1)
    {
        if (unionarr.size()==0||unionarr.back() != nums1[i])
        {
            unionarr.push_back(nums1[i]);
        }
        i++;
    }
    return unionarr;
}

int main()
{
    vector<int> nums1 = {1,1,0,1,1,1,1,0,1,1,1};
    vector<int> nums2 = {1,2,2,3,5};
    int k = maxconsecutiveones(nums1);
    // vector<int> nums3 = intersectionfinder(nums1, nums2);
    // for (int i = 0; i < nums3.size(); i++)
    // {
    //     cout << nums3[i] << " ";
    // }
    cout<<k;
    return 0;
}