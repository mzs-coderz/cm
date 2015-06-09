#include<bits/stdc++.h>
int main ()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        double a, b, c;
        scanf("%lf %lf %lf",&a, &b, &c);
        double s = (a+b+c)/2;
        double area = sqrt( s*(s-a)*(s-b)*(s-c));
        printf("%.10lf\n",area);
    }
    return 0;
}
