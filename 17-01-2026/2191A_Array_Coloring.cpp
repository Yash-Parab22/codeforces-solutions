#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> c(n,0);
    vector<int> ind(n,0);
    iota(ind.begin(),ind.end(),0);
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    sort(ind.begin(),ind.end(),[&](int a,int b){
        return c[a]<c[b];
    });
    for(int i=1;i<n;i++){
        if(ind[i]%2==ind[i-1]%2){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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