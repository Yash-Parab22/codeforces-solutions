#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int w=n;
    int l=0;
    int m=0;
    while(max(l,w)>1){
        m+= w/2 + l/2;
        l-=  l/2;
        l+= (w/2);
        w-=  w/2;
    }
    cout<<m+1<<endl;
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