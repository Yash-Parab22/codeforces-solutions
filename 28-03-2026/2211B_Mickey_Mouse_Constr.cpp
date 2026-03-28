#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x,k;
    cin>>x>>k;
    int c=abs(x-k);
    int ans=0;
    for(int i=1;i<=c;i++){
        if(c%i==0){
            ans++;
        }
    }
    if(x==k) ans=1;
    cout<<ans<<endl;
    for(int i=0;i<x;i++){
        cout<<1<<" ";
    }
    for(int j=0;j<k;j++){
        cout<<-1<<" ";
    }
    cout<<endl;
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