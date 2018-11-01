#include<bits/stdc++.h>
using namespace std;
void heapify(int a[],int n,int node)
{

    int l=2*node;
    int r=2*node+1;
    int mx=node;
    if(l<n && a[l]>a[mx])      mx=l;
    if(r<n && a[r]>a[mx])      mx=r;
    if(mx!=node){
            swap(a[node],a[mx]);
    heapify(a,n,mx);
    }
}

void heapsort(int a[],int n)
{
    for(int i=n/2;i>=1;i--) heapify(a,n,i);
    for(int i=n;i>=1;i--)
    {
        swap(a[1],a[i]);
        heapify(a,i,1);
    }
}
int main()
{
    int n,i,j,k,a[1000];
    cin>>n;
    for(i=1;i<=n;i++)cin>>a[i];
    heapsort(a,n);
    for(i=1;i<=n;i++)cout<<a[i]<<" ";
    return 0;
}
