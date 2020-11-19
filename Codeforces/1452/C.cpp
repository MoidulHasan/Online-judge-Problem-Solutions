#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l,i,r=0,a=0,b=0;
        l=s.size();
        for(i=0; i<l; i++)
        {
            if(s[i]=='(')
            {
                a++;
            }
            else if(s[i]==')')
            {
                if(a!=0)
                {
                    r++;
                    a--;
                }
            }
            if(s[i]=='[')
            {
                b++;
            }
            else if(s[i]==']')
            {
                if(b!=0)
                {
                    r++;
                    b--;
                }
            }
        }
        cout<<r<<endl;
    }
}


