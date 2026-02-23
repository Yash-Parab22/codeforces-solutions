#include<bits/stdc++.h>
using namespace std;
struct EC{
    int val;
    int c;
};
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    stack<EC> c;
    for(int i=n-1;i>=0;i--){
        if(c.empty()){
            EC temp;
            temp.val=a[i];
            temp.c=1;
            c.push(temp);
        }else{
            if(c.top().val==a[i]){
                EC temp=c.top();
                c.pop();
                temp.c=temp.c+1;
                c.push(temp);
            }else if(c.top().val==a[i]+1){
                c.pop();
                if(!c.empty()&&c.top().val==a[i]){
                    EC temp=c.top();
                    c.pop();
                    temp.c=temp.c+1;
                    c.push(temp);
                }else{
                    EC temp;
                    temp.val=a[i];
                    temp.c=1;
                    c.push(temp);
                }
            }else{
                EC temp;
                temp.val=a[i];
                temp.c=1;
                c.push(temp);
            }
        }
    }
    long long ans=0;
    while(!c.empty()){
        ans+= c.top().c;
        c.pop();
    }
    cout<<ans<<endl;
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