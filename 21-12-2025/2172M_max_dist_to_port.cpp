#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int no;
    int prod;
    vector<Node*> way;
    Node(int n,int pr){
        no=n;
        prod=pr;
    }
};
void solve(){
    int n,m,k;
    cin>>n>>m>>k;            // n no of cities    m no of roads       k types of products
    vector<Node*> city;      // adjacency list like graph
    queue<Node*> q;          // queue for BFS
    unordered_map<int,int> dist;        // tracking max dist of every product
    int temp;
    //beginning of declaring and inputs
    for(int i=0;i<n;i++){
        cin>>temp;
        Node* c= new Node(i,temp);
        city.push_back(c);
    }
    int t2;
    for(int i=0;i<m;i++){
        cin>>temp>>t2;
        city[temp-1]->way.push_back(city[t2-1]);
        city[t2-1]->way.push_back(city[temp-1]);
    }
    // end of taking inputs
    vector<bool> visited(n,false);       // see if node vistied before or not
    vector<int> level(n,-1);             //keeping tracks of level
    level[0]=0;
    q.push(city[0]);
    while(!q.empty()){
        Node* ph=q.front();
        visited[ph->no]=true;

            dist[ph->prod]=max(dist[ph->prod],level[ph->no]);
        int sph=ph->way.size();
        for(int i=0;i<sph;i++){
            if(!visited[ph->way[i]->no]){
                q.push(ph->way[i]);
                visited[ph->way[i]->no]=true;
                level[ph->way[i]->no]= level[ph->no]+1;
            }
        }
        q.pop();
    }
    for(int i=1;i<=k;i++){
        cout<<dist[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}