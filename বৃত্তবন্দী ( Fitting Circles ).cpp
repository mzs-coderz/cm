#include<bits/stdc++.h>
#define pi 2*acos(0)
double R,c,theta,angle1,angle2;

int main()
{
    int T, n;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        scanf("%lf %d",&R, &n);
        if(n==2)
            printf("%.2lf\n",(2*R)/4);
        else
        {
            angle1 = (2*pi)/n;
            angle2 = (pi-angle1)/2;
            c = sin(angle1)/sin(angle2);
            printf("%.2lf\n",(c*R)/(2+c));
        }
    }
    return 0;
}
