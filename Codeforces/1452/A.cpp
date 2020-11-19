#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,i,j,x;
        cin>>a>>b;
        n=min(a,b)*2;
        c=(max(a,b)-min(a,b))*2;
        n+=max(0,c);
        if(c>0) n--;
        cout<<n<<endl;
    }
}

