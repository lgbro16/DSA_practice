#include<bits/stdc++.h>
using namespace std ;
vector<int> bfsOfGraph(int V, vector<vector<int>> edges) {
        int visited[V]={0};
        vector<int> adj[V];
        queue<int> q;
        vector<int> bsf;

        for(auto it:edges){
    adj[it[0]].push_back(it[1]);
    adj[it[1]].push_back(it[0]);
}

        visited[0]=1;
        q.push(0);

        while(!q.empty()){
            int node =q.front();
            q.pop();
            bsf.push_back(node);
            for(auto it:adj[node]){
                if(!visited[it]){
                    visited[it]=1;
                    q.push(it);
                }
            }
        }
    return bsf;
        
    }
void traversal(int node,vector<int> &visited,vector<int> adj[],vector<int> &dfs){
    visited[node]=1;
    dfs.push_back(node);
    for(auto it:adj[node]){
        if(!visited[it]){
            traversal(it,visited,adj,dfs);
        }
    }
}
vector<int> dfsOfGraph(int V, vector<vector<int>> edges){
     vector<int> dfs;
     vector<int> visited(V,0);
     vector<int> adj[V];

     for(auto it:edges){
    adj[it[0]].push_back(it[1]);
    adj[it[1]].push_back(it[0]);
}
traversal(0,visited,adj,dfs);
return dfs;
}

int main(){
    int m,n;
vector<vector<int>> ans[m][n];
return 0;
}