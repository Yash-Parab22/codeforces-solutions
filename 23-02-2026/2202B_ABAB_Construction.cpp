#include<bits/stdc++.h>
using namespace std;
int n;
string s;
vector<char> a;
bool fr(int i,int f,int b){
    for(;i<n;i++){
        char x=s.at(i);
        if(x=='?'){
            return fr(i+1,f+1,b)||fr(i+1,f,b-1);

        }
        if(x==a[f]){
            f++;
        }else if(x==a[b]){
            b--;
        }else{
            return false;
        }
    }
    return true;
}
void solve(){
    cin>>n;

    cin>>s;
    a=vector<char> (n);
    for(int i=0;i<n;i++){
        a[i]= 'a'+ (i%2);
    }
    int f=0;
    int b=n-1;
    bool c=fr(0,f,b);
    if(c){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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