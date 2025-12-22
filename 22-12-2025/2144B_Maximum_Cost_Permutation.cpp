#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    unordered_map<int,int> b;
    for(int i=0;i<n;i++){    //Taking input and recording which numbers are present
        cin>>a[i];
        b[a[i]]+=1;
    }
    vector<int> x;
    for(int i=1;i<=n;i++){
        if(b[i]<1){
            x.push_back(i);   // stroring numbers which are not present in ascending order
        }
    }
    int k=x.size()-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            a[i]=x[k];        //filling the zeros with missing numbers 
            k--;              //in a way where first zero has highest missing no
        }                     //and last zero has lowest missing no for maximum score
    }
    vector<int> perm(n,0);
    iota(perm.begin(),perm.end(),1); // iota function to generate array as 1,2,3,...,n
    int i=0,j=n-1;
    while(a[i]==perm[i]&&i<n){     //comparing from start till first mismatch
        i++;
    }
    while(a[j]==perm[j]&&j>=0){    //comparing from end till first mismatch
        j--;
    }
    if(i<j){
        cout<<j-i+1<<endl;
    }else{
        cout<<0<<endl;
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