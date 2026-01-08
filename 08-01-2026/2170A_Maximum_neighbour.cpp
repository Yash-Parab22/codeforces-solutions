#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n==2){
        cout<<9<<endl;
        return;
    }
    cout<<max((((n*n)-1)*4)-n,((n*n)-(n+1))*5)<<endl;
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