#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    long long g;
    unordered_map<long long,long long> a;
    long long m=0;
    for(int i=0;i<n;i++){
        cin>>g;
        a[g-i]+=g;
        m=max(m,a[g-i]);
    }
    cout<<m<<endl;
    return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}