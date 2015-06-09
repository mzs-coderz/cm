#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        int a;
        scanf("%d",&a);
        printf("Case %d:\n",i);
        for (int j=1; j<=10; j++)
        {
            printf("%d * %d = %d\n",a,j,a*j);
        }
    }
    return 0;
}
