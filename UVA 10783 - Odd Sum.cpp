#include<stdio.h>
int main()
{
    int T,a,b,i,j,sum,smallest;
    scanf("%d", &T);
    for(i=1;i<=T;i++)
    {
        scanf("%d\n%d", &a, &b);
        smallest=(a<b)?a:b;
        sum=0;
        for(j=smallest;j<=b;j++)
        {
            if(j%2!=0)
            {
                sum+=j;
            }
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}