#include<bits/stdc++.h>
using namespace std;
void solve(){
    int s,k,m;
    cin>>s>>k>>m;
    if(k>=s){
        cout<<max(0,s-(m%k))<<endl;
    }else{
        int odRem= k;
        int noFlips= m/k;
        if(noFlips%2==1){
            cout<< max(0,odRem-(m%k))<<endl;
        }else{
            cout<<max(0,s-(m%k))<<endl;
        }
    }
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