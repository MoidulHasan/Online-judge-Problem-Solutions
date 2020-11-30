#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,i,z,ma1=0,ma2=0,mi1=999999,mi2=999999;
        vector<int>v,a;
        cin>>n>>x;
        for(i=0; i<n; i++)
        {
            cin>>z;
            v.push_back(z);
        }
        for(i=0; i<n; i++)
        {
            cin>>z;
            a.push_back(z);
        }
        sort(a.begin(),a.end());
        sort(v.begin(),v.end());
        int f=n-1,fl=0;
        for(i=0; i<n; i++)
        {
            if(v[i]+a[f]>x)
            {
                fl++;
                break;
            }
            f--;
        }
        if(fl==0)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
 
    }
}