#include<bits/stdc++.h>
int main ()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        int n;
        scanf("%d",&n);
        int sum = 0;
        int temp;
        for(int j=1; j<=n; j++)
        {
            scanf("%d",&temp);
            sum += temp;
        }
        printf("Case %d: %d\n",i,sum/n);
    }
    return 0;
}
