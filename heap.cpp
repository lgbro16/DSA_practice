#include<bits/stdc++.h>
using namespace std ;

vector<string> findRelativeRanks(vector<int>& score) {
        int n =score.size();
        vector<string> ans(n);
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<n;i++){
            int x = score[i];
            pq.push({x,i});
        }
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int i = it.second;
            ans[i]=to_string(n-pq.size());
        }
        for(string &s:ans){
            if(s=="1"){
                s="Gold Medal";
            }
            else if(s=="2"){
                s="Silver Medal";
            }
            else if(s=="3"){
                s="Bronze Medal";
            }
        }
        return ans;
    }
int main(){
vector<int> score={5,4,3,2,1};
vector<string> result=findRelativeRanks(score);
for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
}
return 0;
}