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
	        vector<pair<int,int>>v(n);
	        for(int i=0;i<n;i++)
	        cin>>v[i].first>>v[i].second;
	        
	        sort(v.begin(),v.end());
	        pair<int,int> curr = make_pair(0,0);
	        string ans;
	        bool ok = true;
	        
	        for(int i=0;i<n;i++)
	        {
	            int r = v[i].first - curr.first;
	            int u = v[i].second - curr.second;
	            if(r<0 || u<0)
	            {
	                ok = false;
	                cout<<"NO\n";
	                break;
	            }
	            ans+=string(r,'R');
	            ans+=string(u,'U');
	            curr = v[i];
	        }
	        
	        if(ok)
	        cout<<"YES\n"<<ans<<"\n";
	        
	            
	        }
	        
	        
	        
	    
	
	return 0;
}