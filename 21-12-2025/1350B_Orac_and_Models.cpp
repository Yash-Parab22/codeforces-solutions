#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n+1,0);  // 1 indexed array for simplicity
    for(int i=0;i<n;i++){
        cin>>a[i+1];
    }
    int ans=1;
    vector<int> b(n+1,1);   // array to use precalculated no of models if a[i]<a[i*j]
    for(int i=n/2;i>0;i--){  // since it should be divisible start from n/2
        int m=1;
        for(int j=2;i*j<=n;j++){
            if(a[i]<a[i*j]){
                m= max(m,(b[i]+b[i*j]));
            }
        }
        b[i]=m;    
        ans=max(ans,b[i]);
    }
    cout<<ans<<endl;
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