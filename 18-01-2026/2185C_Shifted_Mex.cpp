#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    unordered_set<int> s;
    for (int i=0;i<n;i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    int mx=0;
    for (int x : s){
        if (!s.count(x - 1)){
            int curr = 1;
            int y = x + 1;
            while(s.count(y)){
                curr++;
                y++;
            }
            mx=max(mx,curr);
        }
    }
    cout<<mx<<endl;
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