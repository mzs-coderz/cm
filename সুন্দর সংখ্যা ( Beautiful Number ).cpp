#include<bits/stdc++.h>
using namespace std;
bool status[200000000];
long long N, M, cnt,sq;
long long m[150];
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        cnt = 0;
        scanf("%lld",&M);
        for(int j=1; j<=M; j++)
            scanf("%lld",&m[j]);
        scanf("%lld",&N);
        memset(status,0,sizeof(status));
        for(int j=1; j<=M; j++)
        {
            for(int k=m[j]; k<=N; k+=m[j])
            {
                if(status[k] == 0)
                {
                        cnt++;
                        //cout<<k <<" " << status[k] <<endl;
                        status[k] = 1;
                }
            }
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
