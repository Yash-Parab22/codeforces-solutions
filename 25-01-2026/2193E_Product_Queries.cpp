#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;

    vector<int> a(n);
    unordered_map<int,int> md;
    for(int i=0;i<n;i++){
        cin>>a[i];
        md[a[i]]=1;
    }
    for(int i=1;i<=n;i++){
        if(md[i]==0){
            int currmin=10000000;
            for(int j=2;j*j<=i;j++){
                if(i%j==0&&(md[j]>0)&&(md[i/j]>0)){
                    currmin=min(currmin,md[j]+md[i/j]);
                }
            }
            if(currmin!=10000000)
            md[i]=currmin;
        }
    }
    for(int i=1;i<=n;i++){
        if(md[i]==0){
            cout<<-1<<" ";
        }else{
            cout<<md[i]<<" ";
        }
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