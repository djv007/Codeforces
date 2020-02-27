#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        int full = n-n%k;
        full += min(k/2 , n%k);
        cout<<full<<"\n";
    }

    return 0;
}