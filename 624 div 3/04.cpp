#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int A = -1 , B=-1 , C=-1;
        int ans = 1e9;
         for(int ca=1;ca<=2*a;ca++)
         {
             for(int cb = ca;cb<=2*b;cb+=ca)
             {
                 for(int i=0;i<2;i++)
                 {
                     int cc = (c/cb)*cb +i*cb;
                     int res = abs(cc-c) + abs(cb-b) + abs(ca-a);
                     if(res < ans)
                     {
                         ans = res;
                         A = ca;
                         B = cb;
                         C = cc; 
                     }
                 }
             }
         }
         cout<<ans<<"\n"<<A<<" "<<B<<" "<<C<<"\n";
    }
    return 0;
}