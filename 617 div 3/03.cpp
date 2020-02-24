#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    map<pair<int,int>,int> vis;
	    pair<int,int> curr = {0,0};
	    vis[curr] = 0;
	    int l = -1 , r = n;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(s[i] == 'L') --curr.first;
	        if(s[i] == 'R') ++curr.first;
	        if(s[i] == 'U') ++curr.second;
	        if(s[i] == 'D') --curr.second;
	        
	        if(vis.count(curr))
	        {
	            if(i-vis[curr]+1 < r-l+1)
	            {
	                l = vis[curr];
	                r = i;
	            }
	        }
	        vis[curr] = i+1;
	    }
	    
	    if(l==-1)
	    cout<<"-1\n";
	    else
	    cout<<l+1<<" "<<r+1<<"\n";
	}
	return 0;
}