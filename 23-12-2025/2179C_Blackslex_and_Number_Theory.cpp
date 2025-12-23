#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    int mi=1000000000;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mi=min(mi,a[i]);
    }
    int ans=1000000000;
    for(int i=0;i<n;i++){
        a[i]-=mi;
    }
    bool isan=true;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            ans=min(ans,a[i]);
        }
    }


    
    cout<<max(ans,mi)<<endl;
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