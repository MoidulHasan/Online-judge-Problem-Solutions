#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=1;
    scanf("%d", &t);
    while(t--)
    {
        int n,w,x,y,i;
        scanf("%d%d",&n,&w);
        vector<int>v;
        for(i=0;i<n; i++)
        {
            scanf("%d%d",&x,&y);
            v.push_back(y);
        }
        sort(v.begin(),v.end());
        int f=0,r=0;
        for(i=1; i<n; i++)
        {
            if(abs(v[i]-v[f])>w)
            {
                r++;
                f=i;
            }
        }
        printf("Case %d: %d\n",c,r+1);
        //cout<<r+1<<endl;
        c++;
    }
}
