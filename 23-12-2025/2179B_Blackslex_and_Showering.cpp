#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=1;i<n;i++){
        sum+= abs(a[i]-a[i-1]);
    }
    if(n==1){
        cout<<0<<endl;
    }
    int maxd=0;
    for(int i=1;i<=n-2;i++){
        int d=( abs(a[i-1]-a[i])+abs(a[i]-a[i+1]) ) - abs(a[i-1]-a[i+1]);
        if(d>maxd){
            maxd=d;
        }
    }
    if(abs(a[0]-a[1])>maxd){
        maxd= abs(a[0]-a[1]);
    }
    if(abs(a[n-1]-a[n-2])>maxd){
        maxd=abs(a[n-1]-a[n-2]);
    }
    cout<<sum-maxd<<endl;
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