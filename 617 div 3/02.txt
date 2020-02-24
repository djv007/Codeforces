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
	    if(n<10)
	    {
	        cout<<n<<"\n";
	        continue;
	    }
	    int spend = 0 , cb = 0;
	    while(n>=10)
	    {
	       spend += n-n%10;
	       cb = (n-n%10)/10;
	       n = cb + n%10;
	    }
	    spend+=n;
	    cout<<spend<<"\n";
	}
	return 0;
}