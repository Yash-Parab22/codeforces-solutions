#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> edge(n,vector<int>());
    int a,b,cs;
    for(int i=0;i<m;i++){
        cin>>cs;
        if(cs==0) continue;
        cin>>a;
        for(int j=0;j<cs-1;j++){
            cin>>b;
            edge[a-1].push_back(b-1);
            edge[b-1].push_back(a-1);
        }
    }
    int curgrp=0;
    int ccount=0;
    unordered_map<int,int> grpans;
    vector<int> belongTo(n,-1);
    queue<int> heh;
    for(int i=0;i<n;i++){
        if(belongTo[i]==-1){
            curgrp++;
            heh.push(i);
            belongTo[i]=curgrp;
            ccount=1;
            while(!heh.empty()){
                int x=edge[heh.front()].size();
                int fr=heh.front();
                for(int k=0;k<x;k++){
                    if(belongTo[edge[fr][k]]==-1){
                        belongTo[edge[fr][k]]=curgrp;
                        ccount++;
                        heh.push(edge[fr][k]);
                    }
                }
                heh.pop();
            }
            grpans[curgrp]=ccount;
        }
    }
    for(int i=0;i<n;i++){
        cout<<grpans[belongTo[i]]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}