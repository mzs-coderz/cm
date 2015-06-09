#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int j=1; j<=T; j++)
    {
        char s[210];
        scanf("%s",s);
        int a=strlen(s);
        printf("Case %d:\n",j);
        for(int i=a-1; i>=0; i--)
            {
                int j=0;
                while(j<a-i)
                {
                    printf("%c",s[j]);
                    j++;
                }
                printf("\n");
            }
    }
    return 0;
}
