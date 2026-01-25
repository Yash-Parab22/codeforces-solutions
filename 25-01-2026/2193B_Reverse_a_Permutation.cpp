#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    unordered_map<int,int> ind;
    for(int i=0;i<n;i++){
        cin>>a[i];
        ind[a[i]]=i;
    }
    for(int i=0;i<n;i++){
        if(a[i]!=n-i){
            int pos=ind[n-i];
            reverse(a.begin()+i,a.begin()+pos+1);
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
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