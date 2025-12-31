#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0;
    int y=0;
    for(int i=0;i<n-3;i++){
        if(s.at(i)=='2'&&s.at(i+1)=='0'&&s.at(i+2)=='2'){
            if(s.at(i+3)=='5'){
                x+=1;
            }else if(s.at(i+3)=='6'){
                y+=1;
            }
        }
    }
    if(x==0||y>0){
        cout<<0<<endl;
    }else{
        cout<<1<<endl;
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