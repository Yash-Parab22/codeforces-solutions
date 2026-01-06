#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,k;
    cin>>k>>n;
    while(k!=0){
        n*=2;
        k--;
    }
    cout<<n<<endl;
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