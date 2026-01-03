#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    unordered_map<int,int> ans;
    vector<int> sets(m,0);
    for(int i=0;i<m;i++){
        cin>>sets[i];
    }
    int q;
    for(int i=0;i<k;i++){
        cin>>q;
        ans[q]=1;
    }
    if(k==n){
        for(int i=0;i<m;i++){
            cout<<1;
        }
        cout<<endl;
        return;
    }
    if(k<n-1){
        for(int i=0;i<m;i++){
            cout<<0;
        }
        cout<<endl;
        return;
    }else{
        for(int i=0;i<m;i++){
            if(ans[sets[i]]==0){
                cout<<1;
            }else{
                cout<<0;
            }
        }
        cout<<endl;
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