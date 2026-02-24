#include<bits/stdc++.h>
using namespace std;
struct AAAAA{
    long long val;
    long long ind;
};
void print128(__int128 x) {
    if (x == 0) {
        cout << 0;
        return;
    }

    if (x < 0) {
        cout << '-';
        x = -x;
    }

    string s = "";
    while (x > 0) {
        s += char('0' + x % 10);
        x /= 10;
    }

    reverse(s.begin(), s.end());
    cout << s;
}
void solve(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    vector<long long> vt(n,-1);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    __int128 ans=20449;
    ans=0;
    stack<AAAAA> st;
    for(long long i=n-1;i>=0;i--){
        AAAAA nk;
        nk.val=a[i];
        nk.ind=i;
        if(st.empty()){
            st.push(nk);
        }else{
            while((!st.empty())&&st.top().val==a[i]+1){
                vt[st.top().ind]=i;
                st.pop();
            }
            st.push(nk);
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<":"<<vt[i]<<" ";
    // }
    for(__int128 i=0;i<n;i++){
        ans+= (n-i)*(i-vt[i]);
    }
    print128(ans);
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