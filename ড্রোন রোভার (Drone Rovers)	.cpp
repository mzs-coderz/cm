#include<bits/stdc++.h>
using namespace std;

int x1, x2, Y1, y2;
char moves[110];

//Navigation process of the first Drone
void navigate1( char a)
{
    if(a == 'L')
        x1 = (x1-1 < 0 ? 0: x1-1);
    else if(a == 'R')
        x1 = (x1+1 > 7 ? 7: x1+1);
    else if(a == 'U')
        Y1 = (Y1+1 > 7 ? 7: Y1+1);
    else if(a == 'D')
        Y1 = (Y1-1 < 0 ? 0: Y1-1);
}
//Navigation process of the second Drone
void navigate2( char a)
{
    if(a == 'L')
        x2 = (x2-1 < 0 ? 0: x2-1);
    else if(a == 'R')
        x2 = (x2+1 > 7 ? 7: x2+1);
    else if(a == 'U')
        y2 = (y2+1 > 7 ? 7: y2+1);
    else if(a == 'D')
        y2 = (y2-1 < 0 ? 0: y2-1);
}

//Navigating the Drone here
bool decide()
{
    int len = strlen(moves);
    for(int i = 0; i <len; i++)
    {
        if(i%2 == 0)
        {
            navigate1(moves[i]);
            //printf("%d %d %d %d\n",x1,Y1,x2,y2);

            if(x1 == x2 && Y1==y2)
                return 1;
        }
        else
        {
            navigate2(moves[i]);
            //printf("%d %d %d %d\n",x1,Y1,x2,y2);
            if(x1 == x2 && Y1==y2)
                return 1;
        }
    }
    return 0;
}

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {

        scanf("%d %d %d %d",&x1,&Y1,&x2,&y2);
        scanf("%s",moves);
        if(decide())
            printf("Case %d: COLLISION\n",i);
        else
            printf("Case %d: SAFE\n",i);
    }
    return 0;
}
