#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int,int> x;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] <= n);
        x[a[i]]++;
    }
    int m = 0;
    while(m <= n && x[m] > 0) m++;
    if(m == 0){
        cout << "NO\n";
    } else if(m == 1 && x[0] >= 2){
        cout <<"NO"<<endl;
    } else {
        cout <<"YES"<<endl;
    }
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
