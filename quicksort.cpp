#include<bits/stdc++.h>
using namespace std ;
int partition(vector<int> &arr,int high,int low){
int i = low;
int j = high;
int pivot = arr[low];
while(i<j){
    while(arr[i]<=pivot && i<=high-1){
        i++;
    }
    while(arr[j]>pivot && j>=low+1){
        j--;
    }
   if(i<j){
    swap(arr[i],arr[j]);
   }
}
swap(arr[low],arr[j]);
return j;
}
vector<int> qs(vector<int> &arr,int low,int high){
    if(low<high){
int p = partition(arr,high,low);
qs(arr,low,p-1);
qs(arr,p+1,high);    
    }
    return arr;
}
int main(){
vector<int> arr = {5,25,1,6,3,72,8,84};
vector<int> sorted = qs(arr,0,arr.size()-1);
for(int i=0;i<sorted.size();i++){
    cout<<sorted[i]<<" ";
} 
return 0;
}