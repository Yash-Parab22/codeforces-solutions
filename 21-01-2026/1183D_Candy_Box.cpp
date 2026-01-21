#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
 unordered_map<int, int> freq;
int g, ma=0;
long long ans=0;
for(int j=0;j<n;j++){
cin>>g;
freq[g]++; 
ma=max(ma,freq[g]);
}
vector<int> fs;

auto it=freq.begin();
while(it!=freq.end()){
fs.push_back(it->second);
it++;
}
int ci=fs.size();
ci--;
int m=ci+1;
vector<int> ind(ci+1,0);
iota(ind.begin(),ind.end(),0);
sort(ind.begin(),ind.end(),[&](int a,int b){
return fs[a]<fs[b];
});
ci=m-1;
while(ci>=0&&ma>0){
if(fs[ind[ci]]>=ma){
ans+= ma; ci--; ma--;
}else{
ans+=fs[ind[ci]]; ma=fs[ind[ci]]-1; ci--;
}
}
cout<<ans<<endl;
}
int main(){
int t;
cin>>t;
while(t--){
solve();
} 
return 0;
}