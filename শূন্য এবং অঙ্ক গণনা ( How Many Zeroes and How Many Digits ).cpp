#include<bits/stdc++.h>
#define MAXPRIME 30
using namespace std;

vector< int > primo;

void sieve()
{
    for (int i=2; i<MAXPRIME; i++)
    {
        primo.push_back( i );
        for (int j=2; j<i; j++)
            if ( i % j == 0 )
            {
                primo.pop_back();
                break;
            }
    }
}

void factor(int n, map<int,int> &f)
{
    for (int i=0; i<primo.size(); i++)
    {
        if ( n == 1 ) break;
        while ( n % primo[i] == 0 )
        {
            f[ primo[i] ]++;
            n /= primo[i];
        }
    }
    if ( n != 1 ) f[ n ]++;
}

int count(int n, int f)
{
    int ret = 0;
    while ( n )
    {
        ret += n / f;
        n /= f;
    }
    return ret;
}

int main()
{
    sieve();

    int n, b;
    while ( scanf("%d %d",&n,&b) == 2 )
    {
        map<int,int> f;
        factor( b, f );
        int zeros = INT_MAX;

        map<int,int>:: iterator h;
        for(h=f.begin(); h!=f.end(); h++)
        {
            zeros = min( zeros, count( n, h->first ) / h->second );
        }
        double digitos = 0.0;
        for (int i=1; i<=n; i++)
        {
            digitos += log( i ) / log( b );
        }
        printf("%d %d\n",zeros,(int)floor(digitos + 1e-9)+1);
    }

    return 0;
}
