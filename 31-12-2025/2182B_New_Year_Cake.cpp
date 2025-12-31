#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin>>a>>b;
    int x=a,y=b;
    int i=1;
    int j=2;
    int m=0;
    int ans=0;
    while(true){
        if(x>=i){
            x-=i;
            ans+=1;
            i*=4;
        }else{
            break;
        }
        if(y>=j){
            y-=j;
            ans+=1;
            j*=4;
        }else{
            break;
        }
    }
    m=ans;
    ans=0;
    x=b;
    y=a;
    i=1;
    j=2;
    while(true){
        if(x>=i){
            x-=i;
            ans+=1;
            i*=4;
        }else{
            break;
        }
        if(y>=j){
            y-=j;
            ans+=1;
            j*=4;
        }else{
            break;
        }
    }
    m=max(m,ans);
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