#include<bits/stdc++.h>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
	 
    cin.tie(NULL);
    freopen("inp.txt","r",stdin);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int>used;
        for(int i=2;i*i<=n;i++)
        {
            if(!used.count(i) && n%i == 0)
            {
                used.insert(i);
                n /= i;
                break;
            }
        }

        for(int i=2;i*i<=n;i++)
        {
            if(!used.count(i) && n%i == 0)
            {
                used.insert(i);
                n /= i;
                break;
            }
        }

       if (int(used.size()) < 2 || used.count(n) || n == 1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            used.insert(n);
            for(auto it : used)
            cout<<it<<" ";
            cout<<"\n";
        }

    }
    return 0;
}