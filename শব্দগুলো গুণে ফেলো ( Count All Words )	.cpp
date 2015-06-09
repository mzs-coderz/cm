#include<bits/stdc++.h>
using namespace std;

int main()
{
    map <string, bool > c;
    int T;
    scanf("%d",&T);

    for(int z=0; z<T; z++)
    {
        int n;
        scanf("%d",&n);
        string s;
        int q=0;
        for(int i=0; i<n; i++)
        {
            cin>>s;
            if(c[s]==0)
            {
                q++;
                c[s]=1;
            }
        }
        printf("%d\n",q);
        c.clear();
    }
    return 0;
}
