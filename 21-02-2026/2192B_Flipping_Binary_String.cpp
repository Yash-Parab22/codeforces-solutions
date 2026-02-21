#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> o,z;
    for(int i=0;i<n;i++){
        if(s.at(i)=='1'){
            o.push_back(i+1);
        }else{
            z.push_back(i+1);
        }
    }
    if(z.size()==n){
        cout<<0<<endl;
        return;
    }else if(o.size()%2==0){
        cout<<(o.size())<<endl;
        for(int i=0;i<o.size();i++){
            cout<<o[i]<<" ";
        }
        cout<<endl;
        return;
    }else if(z.size()%2==1){
        cout<<z.size()<<endl;
        for(int i=0;i<z.size();i++){
            cout<<z[i]<<" ";
        }
        cout<<endl;
        return;
    }else{
        cout<<-1<<endl;
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