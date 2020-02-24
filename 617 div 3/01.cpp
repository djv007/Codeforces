#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n , s = 0;
	    cin>>n;
	    bool odd = 0 , even = 0;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        s+=x;
	        odd|=x%2!=0;
	        even|=x%2==0;
	    }
	    if(s%2!=0 || (odd&&even)) cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}