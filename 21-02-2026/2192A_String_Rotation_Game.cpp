#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    int n;
    
    cin>>n;
    cin>>s;
    s=s+s;
    char c=s.at(0);
    int cc=0;
    int m=0;
    for(int i=0;i<n;i++){
        c=s.at(i);
        vector<int> x;
        for(int j=0;j<n;j++){
            if(s.at(i+j)==c){
                cc++;
            }else{
                x.push_back(cc);
                c=s.at(i+j);
            }
        }
        x.push_back(cc);
        m=max(m,int(x.size()));
    }
    cout<<m<<endl;
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