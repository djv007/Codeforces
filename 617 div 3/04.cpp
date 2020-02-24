#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	    int n,a,b,k;
	    cin>>n>>a>>b>>k;
	    
	    vector<int>h(n);
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>h[i];
	        h[i] %= a+b;
	        if(h[i] == 0) h[i] += a+b;
	        //h[i] = ((h[i] + a - 1) / a) - 1;
	        h[i] = ceil((float)h[i]/a) - 1;
	        
	    }
	    sort(h.begin() , h.end());
	    int ans = 0;
	    for(int i=0;i<n;i++)
	    {
	        if(k - h[i] < 0) break;
	        
	        ans++;
	        k -= h[i];
	    }
	    
	    cout<<ans;
	
	return 0;
}