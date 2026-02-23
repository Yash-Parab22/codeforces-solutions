#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;
    int a=0,b=0,c=0;
    if(y>0){
        a=y;
    }else{
        b=abs(y);
    }
    // while(2*a+4*b<=x){
    //     int cp= 2*a + 4*b;
    //     if((x- cp)%3==0){
    //         cout<<"YES"<<endl;
    //         return;
    //     }
    //     a++;
    //     b++;
    // }
    x-= ((a*2)+(b*4));
    if((x%6)%3==0&&x>=0){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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