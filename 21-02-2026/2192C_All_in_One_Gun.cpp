#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int h;
    cin>>h;
    int k;
    cin>>k;
    vector<int> a(n);
    vector<int> m(n);
    m[n-1]=0;
    vector<long long> p(n);
    cin>>a[0];
    p[0]=a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        p[i]=p[i-1]+a[i];
    }

    for(int i=n-2;i>=0;i--){
        m[i]=max(m[i+1],a[i+1]);
    }
    vector<int> mi(n);
    mi[0]=a[0];
    for(int i=1;i<n;i++){
        mi[i]=min(mi[i-1],a[i]);
    }
    long long ans=0;
    if(h%p[n-1]==0){
        ans+= ((h/p[n-1])*(k+n))-k; 
        cout<<ans<<endl;
        return;
    }
    if(h>p[n-1]){
        ans+= (h/p[n-1])*(k+n);
        h= h%p[n-1];
    }
    if(h==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(p[i]-mi[i]+m[i]>=h||p[i]>=h){
            cout<<(ans+i+1)<<endl;
            return;
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