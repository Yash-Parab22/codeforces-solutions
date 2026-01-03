#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int n=s.length();
    unordered_map<char,int> a;
    a['H']=1;
    a['Q']=1;
    a['9']=1;
    a['+']=0;
    for( char c : s){
        if(a[c]>0){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}