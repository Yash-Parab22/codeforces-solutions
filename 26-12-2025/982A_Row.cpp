#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1){
        if(s.at(0)=='1'){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
        return;
    }
    if(n==2){
        if(s.at(0)!=s.at(1)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        return;
    }
    if(s.at(0)=='0'&&s.at(1)=='0'||s.at(n-1)=='0'&&s.at(n-2)=='0'){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=1;i<n-1;i++){
        if((s.at(i)=='0'&&s.at(i-1)=='0'&&s.at(i+1)=='0')||(s.at(i)=='1'&&(s.at(i-1)=='1'||s.at(i+1)=='1'))){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}