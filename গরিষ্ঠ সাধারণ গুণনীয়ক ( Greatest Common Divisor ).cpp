#include <stdio.h>
long long gcd(long long , long long);

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        long long a, b, result;
        scanf("%lld %lld", &a, &b);
        result = gcd(a, b);
        printf("%lld\n",result);
    }
}
long long gcd(long long a, long long b)
{
    while (a != b)
    {
        if (a > b) return gcd(a - b, b);
        else return gcd(a, b - a);
    }
    return a;
}
