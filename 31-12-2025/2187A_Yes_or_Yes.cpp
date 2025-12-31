#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int l=s.length(),y=0;
    for(int i=0;i<l;i++){
        if(s.at(i)=='Y'){
            y+=1;
        }
    }
    if(y<2){
        cout<<"YES";
    }else{
        cout<<"NO";
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