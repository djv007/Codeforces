#include<bits/stdc++.h>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    int n,m;
    string s;
    cin>>n>>m>>s;
    vector<int>v(n);
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        ++v[x-1];

    }
     for(int i=n-1;i>0;i--)
     {
         v[i-1]+=v[i];
     }
     vector<int>alp(26);
     for(int i=0;i<n;i++)
     {
         alp[s[i]-'a'] += v[i];
         ++alp[s[i]-'a'];
     }

     for(int i=0;i<26;i++)
     {
         cout<<alp[i]<<" ";
     }
     cout<<"\n";
    }
    return 0;
}