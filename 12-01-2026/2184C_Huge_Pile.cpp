#include<bits/stdc++.h>
using namespace std;
int s;
int k=-1;
struct PairHash {
    size_t operator()(const pair<int,int>& p) const {
        return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
    }
};

unordered_map<int,bool> a;

bool idek(int x,int l){
    if(x==s){ 
        k=l;
        return true;
    }else if(x<s) return false;
    if(a[x]){
        return false;
    }
    a[x]=true;
    if(x%2==1){
        return idek(x/2,l+1)||idek((x/2)+(x%2),l+1);
    }else{
        return idek(x/2,l+1);
    }
    
}
void solve(){
    int n;
    cin>>n>>s;
    k=-1;\
    a.clear();
    idek(n,0);
    cout<<k<<endl;
    return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}