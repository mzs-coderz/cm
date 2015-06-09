#include<bits/stdc++.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0; i<T; i++)
    {
        double d;
        scanf("%lf",&d);
        double a=d*0.621371;
        printf("%.10lf\n",a);
    }
    return 0;
}
