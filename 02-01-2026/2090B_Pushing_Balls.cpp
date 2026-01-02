#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m,0));
    string s;
    
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<m;j++){
            a[i][j]= s.at(j)-'0';
        }
    }
    vector<vector<int>> r=a;
    vector<vector<int>> v=a;
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            r[i][j]+= r[i][j-1];
        }
    }
    for(int j=0;j<m;j++){
        for(int i=1;i<n;i++){
            v[i][j]+=v[i-1][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1){
                if(r[i][j]==j+1||v[i][j]==i+1){
                    continue;
                }else{
                    cout<<"NO"<<endl;
                    return;
                }
            }
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