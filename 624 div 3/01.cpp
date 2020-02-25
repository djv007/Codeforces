#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	    int t;
	    cin>>t;
	    while(t--)
	    {
	        int a,b;
	        cin>>a>>b;
	        if(a==b)
	        {
	            cout<<"0\n";
	        }
	        else if(a<b)
	        {
	            if((b-a)%2 == 0)
	            cout<<"2\n";
	            else
	            cout<<"1\n";
	        }
	        else
	        {
	            if((a-b)%2 !=0)
	            cout<<"2\n";
	            else
	            cout<<"1\n";
	           
	        }
	    }
	        
	        
	        
	    
	
	return 0;
}

/*
#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		if (a == b) cout << 0 << endl;
		else cout << 1 + int((a < b) ^ ((b - a) & 1)) << endl;
	}
	
	return 0;
}
*/