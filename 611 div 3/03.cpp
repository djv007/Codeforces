#include<bits/stdc++.h>
using namespace std;
int main()
{
    
     ios_base::sync_with_stdio(false);
	 
    cin.tie(NULL);
    int n;
    cin>>n;
    int N = 2e5+10;
    int f[N], used[N];
    vector<int> give , receive;
    for(int i=1;i<=n;i++)
    {
        cin>>f[i];
        if(f[i] != 0)
        used[f[i]] = 1;
        else
        {
            give.push_back(i);
        }
        
    }

    for(int i=1;i<=n;i++)
    {
        if(!used[i])
        receive.push_back(i);
    }
    for(int i=0;i<give.size();i++)
    {
        if(give[i] == receive[i])
        {
            if(i==0)
            swap(give[i] , give[i+1]);
            else
            {
                swap(give[i] , give[i-1]);
            }
            
        }

    }

    for(int i=0;i<give.size();i++)
    {
        f[give[i]] = receive[i];
    }

    for(int i=1;i<=n;i++)
    cout<<f[i]<<" ";


    return 0;
}