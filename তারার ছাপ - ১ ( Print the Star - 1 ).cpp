#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        int n;
        char c,m;
        cin >> n >> c >> m;
        printf("Case %d:\n",i);
        if(c=='U' && m=='R')
        {
            for(int j=1; j<=n; j++)
            {
                for(int k=1; k<=j; k++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
        }
        if(c=='D' && m=='R')
        {
            for(int j=n; j>0; j--)
            {
                for(int k=1; k<=j; k++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
        }
        if(c=='U' && m=='L')
        {
            for(int j=0; j<n; j++)
            {
                for(int B=j; B<n-1; B++)
                {
                    cout<<" ";
                }
                for(int k=0; k<=j; k++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
        }
        if(c=='D' && m=='L')
        {
            for(int j=0; j<n; j++)
            {
                for(int B=1; B<j+1; B++)
                {
                    cout<<" ";
                }
                for(int k=j; k<n; k++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
        }

    }
    return 0;
}
