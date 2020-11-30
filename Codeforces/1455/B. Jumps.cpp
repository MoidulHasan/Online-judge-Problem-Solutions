#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,j,a,b,c,x;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            x=(i*(i+1))/2;
            if(x>=n)
                break;
        }
        if(x==n)
        {
            cout<<i<<endl;
        }
        else
        {
            a=x-n;
            b=i;
            if(a<=b && a>1)
            {
                cout<<b<<endl;
            }
            else if(a==1)
            {
                cout<<b+1<<endl;
            }
            else{
                cout<<b+(b-a)<<endl;
            }
        }
 
    }
}