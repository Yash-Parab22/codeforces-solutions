#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    s.insert(s.end(),n,'+');     //creating string having n number of '+'
    string h;           
    cin>>h;
    int i1=0;                    //points to start of h
    int i2=n-1;                  //points to end of h
    int qu=0;
    for(int i=0;i<k;i++){
        if(h.at(i)=='0'){    // if 0 then start point position char becomes '-' as it is surely removed
            s.at(i1)='-';   
            i1++;
        }else if(h.at(i)=='1'){  // if 1 then end point position char becomes '-' as it is surely removed 
            s.at(i2)='-';
            i2--;
        }else{
            qu++;   // counting number of uncertain removals
        } 
    }
    char m='?';    // ? for uncertain cards
    if(qu>=i2-i1+1){    // if uncertain removals >= remaining cards then all are surely removed i.e '-'
        m='-';
    }
    while(qu>0&&i1<=i2){   // inserting final '-' or '?' depending on qu 
        s.at(i1)=m;
        s.at(i2)=m;
        i1++;
        i2--;
        qu--;
    }
    cout<<s<<endl;
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