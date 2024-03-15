#include<stdio.h>
#include<math.h>
int main()
{
    int sum,sub,a,b,t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &sum, &sub);
        if(sub>sum)
        {
            printf("impossible\n");
        }
        else 
        {
            b=(sum-sub)/2;
            a=sum-b;
            if((a+b)==sum && abs(a-b)==sub)
            {
                printf("%d %d\n", a, b);
            }
            else
            {
                printf("impossible\n");
            }
        }
    }
    return 0;
}