#include<bits/stdc++.h>
using namespace std;
#define ll int
int main()
{
    
     ios_base::sync_with_stdio(false);
	 
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll arr[n];
    set<ll>occupied;
    deque<pair<ll,ll>>que;
    long long sum = 0;
    for(ll i = 0 ; i  < n ; i++)
    {
        cin>>arr[i];
        occupied.insert(arr[i]);
    }
    for(ll i = 0 ; i < n ; i++)
    {
        ll t = arr[i];
        if(occupied.find(t+1) == occupied.end())
        {
            occupied.insert(t+1);
            que.push_back({t+1 , 1});
        }
        if(occupied.find(t-1) == occupied.end())
        {
            occupied.insert(t-1);
            que.push_back({t-1 , 1});
        }
    }
    vector<ll>ans;
    for(ll i=0;i<m;i++)
    {
        ll t = que.front().first;
        ll d = que.front().second;
        que.pop_front();
        ans.push_back(t);
        sum+=d;

        if(occupied.find(t+1) == occupied.end())
        {
            occupied.insert(t+1);
            if(que.size() < m)
            que.push_back({t+1 , d+1});
        }
        if(occupied.find(t-1) == occupied.end())
        {
            occupied.insert(t-1);
            if(que.size() < m)
            que.push_back({t-1 , d+1});
        }



    }

    cout<<sum<<"\n";
    for(auto i:ans)
    cout<<i<<" ";



    return 0;
}