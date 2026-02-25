#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,w,d;
    cin>>n>>w>>d;
    int no=d/w;
    no+=1;
    int g=0;
    if(n%no>0){
        g=1;
    }
    cout<<n/no+g<<endl;
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