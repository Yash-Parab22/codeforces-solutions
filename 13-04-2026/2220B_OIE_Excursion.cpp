#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k=-1;
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]==k){
            c++;
            if(m==c){
                cout<<"NO"<<endl;
                return;
            }
        }else{
            k=a[i];
            c=1;
        }
    }
    cout<<"YES"<<endl;
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