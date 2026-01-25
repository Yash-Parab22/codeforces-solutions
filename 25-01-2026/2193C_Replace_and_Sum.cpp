#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    a[n-1]=max(a[n-1],b[n-1]);
    for(int i=n-2;i>=0;i--){
        a[i]=max(a[i],max(a[i+1],b[i]));
    }
    b[0]=a[0];
    for(int i=1;i<n;i++){
        b[i]=b[i-1]+a[i];
    }
    int l,r;
    for(int i=0;i<q;i++){
        cin>>l>>r;
        cout<< b[r-1]-b[l-1]+a[l-1]<<" ";
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