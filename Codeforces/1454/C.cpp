#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,x,mi=999999999,in;
        cin>>n;
        vector<ll>v[n+5];
        map<ll, ll>mp;
        map<ll, ll> ::iterator itr;
        for(i=1; i<=n; i++)
        {
            cin>>x;
            if(v[x].size()==0)
            {
                v[x].push_back(0);
            }
            v[x].push_back(i);
            mp[x]++;
        }
        ll rr=999999999,f=0;
        ll d;
        for(itr=mp.begin(); itr!=mp.end(); itr++)
        {
            d=itr->first;
            v[d].push_back(n+1);
        }
        for(itr=mp.begin(); itr!=mp.end(); itr++)
        {
            d=itr->first;
            ll r=0;
            for(ll j=1; j<v[d].size(); j++)
            {
                if(v[d][j]-v[d][j-1]>1)
                {
                    r++;
                }
            }
            rr=min(rr,r);
        }
        cout<<rr<<endl;




    }
}

