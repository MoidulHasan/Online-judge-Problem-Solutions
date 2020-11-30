#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,x,y;
        cin>>a>>b>>x>>y;
        ll r=abs(x-a)+abs(y-b);
        if(a==x || b==y)
            cout<<r<<endl;
        else{
            r+=2;
        cout<<r<<endl;
        }
 
    }
}