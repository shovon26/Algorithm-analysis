#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
bool vis[100];
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
           q.push(v);
       }
    }
}

}
int main()
{

    int n,e,u,v,i,j,s;
    cin>>n>>e;

    for(i=0;i<n;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(i=0;i<n;i++)vis[i]=0;
    bfs(1);
    cin>>s;
    for(i=1;i<=n;i++)
    {
        cout<<vis[i]<<" ";
    }

        return 0;
}

