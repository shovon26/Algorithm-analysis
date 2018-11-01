#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
bool vis[100];
int cost[100];
void dfs(int s)
{
    vis[s]=1;
    for(int i=0; i<adj[s].size(); i++)
    {
        int k=adj[s][i];
        if(vis[k]==0)
        {
            cost[k]=cost[s]+1;
            dfs(k);
        }
    }
}
int main()
{
    int n,e,u,v,i,j,s,m;
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(i=0; i<n; i++)
        vis[i]=0;
    int cnt=0;
    for(i=1; i<=n; i++)
    {
        if(vis[i]==0)
        {
            cout<<vis[i]<<" ";
            dfs(i);
            cnt++;
        }
    }
    cout<<endl;

    cout<<"Number of connected components :: "<<cnt<<endl;
    cout<<"Source Node :: ";
    cin>>s;
    dfs(s);
    cout<<"Cost to visit from the source node"<<endl;
    for(i=1; i<=n; i++)
    {
        cout<<i<<" "<<cost[i]<<" "<<endl;
    }

    return 0;
}
