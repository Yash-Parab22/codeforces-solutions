#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> perm(n+1), pos(n+1);
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> perm[i];
        pos[perm[i]] = i;
    }
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=1;i<n;i++){
        if(pos[a[i]] > pos[a[i-1]]){
            cout <<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
