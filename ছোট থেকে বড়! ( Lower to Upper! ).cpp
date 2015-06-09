#include<bits/stdc++.h>
int main()
{
  char name[107];
  int i, len;
  int kases, kaseno = 0;
  scanf("%d", &kases);
  getchar();
  while(kases--)
  {
    gets(name);
    printf("Case %d: ", ++kaseno);
    len = strlen(name);
    for(i=0; i<len; i++)
    {
      printf("%c", toupper(name[i]));
    }
    printf("\n");
  }
  return 0;
}
