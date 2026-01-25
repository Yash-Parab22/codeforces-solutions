#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long> swo(n);
    vector<int> mon(n);
    for(int i = 0; i < n; i++){
        cin >> swo[i];
    }
    for(int i = 0; i < n; i++){
        cin >> mon[i];
    }
    sort(swo.begin(), swo.end());
    vector<long long> pref(n+1, 0);
    for(int i = 1; i <= n; i++){
        pref[i] = pref[i-1] + mon[i-1];
    }
    long long ans = 0;
    for(int k = 1; k <= n; k++){
        long long need = pref[k];
        if(need > n) break;
        long long x = swo[n - need];
        ans = max(ans, x * k);
    }
    cout << ans << "\n";
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
