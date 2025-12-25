#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    unordered_map<int,int> a;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]+=1;
    }
    cout<<((a.size()-1)*2)+1<<endl;
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