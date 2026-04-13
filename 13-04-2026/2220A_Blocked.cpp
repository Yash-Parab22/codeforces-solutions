#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    unordered_map<int,int> f;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        f[a[i]]++;
        if(f[a[i]]==2){
            cout<<-1<<endl;
            return;
        }
    }
    sort(a.begin(),a.end());
    vector<int> x(n);
    x[0]=a[0];
    int i=0;
    int j=n-1;
    while(i<n){
        x[i]=a[j];
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;

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