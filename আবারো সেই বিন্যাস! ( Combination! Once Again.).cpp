#include<bits/stdc++.h>
using namespace std;

int A[60], R, n, m, Different;
long long dp[60][60];
vector <int> v;
long long call(int group, int taken)
{
    if(taken > R)
        return 0;
    if(group >= Different)
    {
        if(taken < R)
            return 0;
        return 1;
    }
    int i;
    long long ret = 0;
    if(dp[group][taken] != -1)
        return dp[group][taken];
    for(i = 0; i<=v[group]; i++)
    {
        ret += call(group+1,taken+i);
    }

    dp[group][taken] = ret;
    return ret;
}
int main()
{
    int i,j,k,cs = 0,t;
    while(1)
    {
        cs++;
        v.clear();
        scanf("%d %d",&n, &m);
        if(n+m == 0)
            break;
        for(i=1; i<=n; i++)
            scanf("%d",&A[i]);
        sort(A+1 , A+n+1);
        i = 1;

        while(i <= n)
        {
            int cnt = 0;
            for( j = i; j<= n; j++)
            {
                if(A[j] != A[i])
                    break;
                cnt++;
            }
            v.push_back(cnt);
            i = j;
        }
        for(i=0; i<v.size(); i++)
            Different = v.size();

        printf("Case %d:\n",cs);

        for(int i=1; i<=m; i++)
        {
            memset(dp,-1,sizeof(dp));
            scanf("%d",&R);
            printf("%lld\n",call(0,0));
        }
    }
    return 0;
}
