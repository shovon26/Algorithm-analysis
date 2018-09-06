
#include<bits/stdc++.h>
using namespace std;

vector<int>generateRandomNumber(int n)
{
    vector<int>num;
    int nn;
    for(int i=0;i<n;i++)
    {
         nn=rand();
        num.push_back(nn);
    }

    return num;
}

vector<int> Selection_sort(vector<int>v)
{
    for(int i=0;i<v.size()-1;i++)
    {
        int min_in=i;
        for(int j=i+1;j<v.size();j++)
        {
            if(v[min_in]>v[j                                                                                                                                                                                                                                                                                                ])
            {
                min_in=j;
            }
        }
        swap(v[min_in],v[i]);
    }

    return v;
}

bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n,a[100],i,j;
    cin>>n;

    vector<int>v;
    v=generateRandomNumber(n);
   for(i=0;i<v.size();i++) cout<<v[i]<<' ';
   cout<<endl;
//    vector<int>vv,vk;
//    cin>>n;
//    for(i=0;i<n;i++) cin>>a[i],vv.push_back(a[i]);
//
//    vk=Selection_sort(vv);
//    double x=clock();
//  for(i=0;i<vk.size();i++) cout<<vk[i]<<' ';
//
//    cout<<endl<<clock()-x<<endl;
//   // sort(vk.begin(),vk.end(),cmp);
//   //  for(i=0;i<vk.size();i++) cout<<vk[i]<<' ';


    return 0;
}
