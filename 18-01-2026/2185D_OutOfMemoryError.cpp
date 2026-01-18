#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,h;
    cin>>n>>m>>h;
    vector<int> a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int flip=-1;
    vector<int> lm(n,0);
    vector<int> org=a;
    vector<int> b(m,0);
    vector<int> c(m,0);
    for(int i=0;i<m;i++){
        cin>>b[i]>>c[i];
    }
    int ind,val;
    for(int i=0;i<m;i++){
        ind = b[i]-1;
        if(lm[ind]>flip){
            val=a[ind]+c[i];
        }else{
            val=org[ind]+c[i];
        }
        if(val>h){
            flip=i;
        }else{
            a[ind]=val;
            lm[ind]=i;
        }
    }
    for(int i=0;i<n;i++){
        if(lm[i]<=flip){
            cout<<org[i]<<" ";
        }else{
        cout<<a[i]<<" ";            
        }

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