#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x,s;
    cin>>n>>s>>x;
    int sum=0;
    int g;
    for(int i=0;i<n;i++){
        cin>>g;
        sum+=g;
    }
    if(sum>s){
        cout<<"NO"<<endl;
    }else{
        if((s-sum)%x==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
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