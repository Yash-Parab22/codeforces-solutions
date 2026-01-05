#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    vector<int> p(n,0);
    int g;
    cin>>g;
    if(g<0){
        a[0]=1;
    }else{
        a[0]=0;
    }
    p[0]=a[0];
    for(int i=1;i<n;i++){
        cin>>g;
        if(g<0){
            a[i]=1;
        }else{
            a[i]=0;
        }
        p[i]=p[i-1]+a[i];
    }
    //int neg=0,pos=0;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         if( (p[j]-p[i]+a[i])%2==1 ){
    //             neg++;
    //         }else{
    //             pos++;
    //         }
    //     }
    // }
    vector<int> sufEven(n+1, 0), sufOdd(n+1, 0);

    for (int i = n-1; i >= 0; i--) {
        sufEven[i] = sufEven[i+1];
        sufOdd[i]  = sufOdd[i+1];
        if (p[i] % 2 == 0) sufEven[i]++;
        else sufOdd[i]++;
    }
    long long pos = 0, neg = 0;

    for (int i = 0; i < n; i++) {
        int need = (p[i] + a[i]) % 2; // 0 or 1

        if (need == 0) {
            // want p[j] % 2 == 1
            neg += sufOdd[i];
            pos += sufEven[i];
        } else {
            // want p[j] % 2 == 0
            neg += sufEven[i];
            pos += sufOdd[i];
        }
    }

    cout<<neg<<" "<<pos<<endl;
    return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}