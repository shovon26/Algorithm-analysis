#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
bool vis[100];
void dfs(int s)
{
    vis[s]=1;
    for(int i=0;i<adj[s].size();i++)
    {
        int k=adj[s][i];
        if(vis[k]==0)
        {
            dfs(k);
        }
    }
}
int main()
{
    int n,e,u,v,i,j;
    cin>>n>>e;
    for(i=0;i<n;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(i=0;i<n;i++)vis[i]=0;
    int cnt=0;
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
            cnt++;
        }
    }
    cout<<cnt<<endl;

        return 0;
}
