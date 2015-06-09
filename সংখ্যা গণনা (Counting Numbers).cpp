#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        map <int,int> mp;
        int t;
        scanf("%d",&t);
        int mx=0,mxv;
        for(int j=0; j<t; j++)
        {
            int aa;
            scanf("%d",&aa);
            mp[aa]++;
            if(mx < mp[aa])
            {
                mx=mp[aa];
                mxv = aa;
            }
            if(mx == mp[aa])
            {
                if(mxv < aa)
                    mxv = aa;
            }
        }
        printf("Case %d: %d %d\n",i,mxv,mx);
    }
    return 0;
}
