#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n<=2){
        for(int i=0;i<n;i++){
            cout<<n<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        cout<<2<<" ";
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