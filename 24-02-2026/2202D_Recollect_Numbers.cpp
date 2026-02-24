#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    if(k<n||k>=2*n){
        cout<<"NO"<<endl;
        return;
    }
    if(k==n){
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++){
            cout<<i<<" "<<i<<" ";
        }
        cout<<endl;
        return;
    }else{
        int rem=k-n;
        vector<int> a;
        a.push_back(1);
        a.push_back(2);
        rem-=1;
        queue<int> us;
        us.push(1);
        us.push(2);
        int ne=3;
        while(rem>0){
            a.push_back(ne);
            us.push(ne);
            a.push_back(us.front());
            us.pop();
            ne++;
            rem--;
        }
        while(!us.empty()){
            a.push_back(us.front());
            us.pop();
        }
        int x=a.size();
        int v=a.size()/2;
        for(int i=v+1;i<=n;i++){
            a.push_back(i);
            a.push_back(i);
        }
        cout<<"YES"<<endl;
        for(int i=0;i<2*n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        return;
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