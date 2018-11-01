#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
bool vis[100];
int cost[100];
void bfs(int s)
{
    vis[s]=1;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int k=q.front();
        q.pop();
    for(int i=0;i<adj[s].size();i++)
    {
        int v=adj[s][i];
       if(vis[v]==0)
       {
           vis[v]=1;
           cost[v]=cost[k]+1;
           q.push(v);
       }
    }
}

}
int main()
{

    int n,e,u,v,i,j,s,m;
        cin>>n>>m;

    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(i=0;i<n;i++)vis[i]=0;
    for(i=0;i<n;i++)cost[i]=0;

    cin>>s;
    bfs(s);
    cout<<"Cost to visit from the source node"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<i<<" "<<cost[i]<<" "<<endl;
    }

        return 0;
}

