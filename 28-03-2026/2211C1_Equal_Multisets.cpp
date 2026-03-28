#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> neg;
    int dup=0;
    unordered_map<int,int> c;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]==-1){
            neg.push_back(i);
        }
        if(b[i]!=-1) c[b[i]]++;
        if(c[b[i]]>1) dup++;
    }
    if(dup>0){
        cout<<"NO"<<endl;
        return;
    }
    int sn=neg.size();
    int k0=0;
    for(int i=0;i<n;i++){
        if(c[a[i]]==0){
            if(k0>=sn){
                cout<<"NO"<<endl;
                return;
            }
            b[neg[k0]]=a[i];
            k0++;
        }
    }
    unordered_map<int,int> wind;
    for(int i=0;i<k;i++){
        wind[b[i]]++;
    }
    for(int i=0;i<k;i++){
        if(wind[a[i]]!=1){
            cout<<"NO"<<endl;
            return;
        }
    }
    for(int i=k;i<n;i++){
        wind[b[i-k]]--;
        wind[b[i]]++;
        if(wind[a[i]]!=1||wind[a[i-k]]>0){
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
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}