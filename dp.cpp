#include<bits/stdc++.h>
using namespace std ;
unordered_map<int, vector<int>> memo;

vector<int> howsum(int targetsum, vector<int>& arr) {
    if(memo.find(targetsum) != memo.end()) {
        return memo[targetsum];
    }

    if(targetsum == 0) return {};
    if(targetsum < 0) return {-1};

    for(int x : arr) {
        int rem = targetsum - x;
        vector<int> ans = howsum(rem, arr);

        if(!(ans.size() == 1 && ans[0] == -1)) {
            ans.push_back(x);
            memo[targetsum] = ans;
            return ans;
        }
    }

    return {-1};
}
int main(){
vector<int> arr={87,102,123,234};
vector<int> result=howsum(300,arr);
for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
}
return 0;
}