#include<bits/stdc++.h>
using namespace std;
char fun(char ch)
{
    if(ch=='N')
        return 'S';
    else if(ch=='S')
        return 'N';
    else if(ch=='E')
        return 'W';
    else if(ch=='W')
        return 'E';
}
pair<int,int> nextpos(pair<int,int>crp, char ns)
{
    if(ns=='N')
        return make_pair(crp.first+1, crp.second);
    else if(ns=='S')
        return make_pair(crp.first-1, crp.second);
    else if(ns=='E')
        return make_pair(crp.first, crp.second+1);
    else if(ns=='W')
        return make_pair(crp.first, crp.second-1);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,i,t=0;
        pair<int,int>pos(0,0);
        string s;
        cin>>s;
        l=s.size();
        map< pair<int,int>,string>mp;
        for(i=0; i<l; i++)
        {
            string st;
            st=mp[pos];
            int f=0;
            pair<int,int>nxtp=nextpos(pos,s[i]);
            for(int j=0; j<st.size(); j++)
            {
                if(st[j]==s[i])
                {
                    f++;
                    break;
                }
            }
            if(f==0)
            {
                string nst;
                nst=mp[nxtp];
                for(int j=0; j<nst.size(); j++)
                {
                    if(nst[j]==fun(s[i]))
                    {
                        f++;
                        break;
                    }
                }
            }
            if(f==0)
            {
                t+=5;
                mp[pos]+=s[i];
            }
            else
            {
                t+=1;
            }
            pos=nxtp;
        }
        cout<<t<<endl;
    }
}
