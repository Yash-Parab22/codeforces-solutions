#include<bits/stdc++.h>
using namespace std;
long long ret(long long w){
    long long sum=0;
    while(w>0){
        sum+=w%10;
        w/=10;
    }
    return sum;
}
void solve(){
    long long x;
    cin>>x;
    long long w=x;
    long long sum=0;
    while(w>0){
        sum+=w%10;
        w/=10;
    }
    int ans=0;
    for(long long i=0;i<=100;i++){
        int v=ret(x+i);
        if(x+i-v==x){
            ans++;
        }
    }
    cout<<ans<<endl;;
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