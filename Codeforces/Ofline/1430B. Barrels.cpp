#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,i,x,r=0;
        cin>>n>>k;
        vector<ll>v;
        for(i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
 
            r+=x;
        }
        if(r==0)
        {
            cout<<0<<endl;
        }
        else{
            sort(v.begin(),v.end());
            ll a=k,b=0;
            for(i=n-2; i>=0; i--)
            {
                b+=v[i];
                a--;
                if(a==0) break;
            }
            cout<<b+v[n-1]<<endl;
        }
 
 
    }
}