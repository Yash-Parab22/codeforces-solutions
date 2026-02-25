#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int sum=0;
    int n=s.length();
    unordered_map<int,int> k;
    sum+= s.at(0)-'0';
    k[s.at(0)-'0'-1]++;
    for(int i=1;i<n;i++){
        sum+= s.at(i)-'0';
        k[s.at(i)-'0']++;
    }
    int ans=0;
    if(sum>=10){
        int needsum=sum-9;
        int curr=0;
        for(int i=9;i>0;i--){
            if(needsum<=0){
                cout<<ans<<endl;
                return;
            }
            int f= needsum/i;
            if(needsum%i>0) f++;
            int rem= min(k[i],f);
            ans+= rem;
            needsum-= rem*i;
        }
    }else{
        cout<<0<<endl;
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