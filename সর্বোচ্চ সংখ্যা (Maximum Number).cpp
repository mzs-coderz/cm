#include<bits/stdc++.h>
int main ()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        int mx;
        int temp;
        for(int j=1; j<=3; j++)
        {
            scanf("%d",&temp);
            if(j == 1)
                mx = temp;
            if(temp > mx)
                mx = temp;
        }
        printf("Case %d: %d\n",i,mx);
    }
    return 0;
}
