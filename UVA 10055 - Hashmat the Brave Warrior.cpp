#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b;
    while(scanf("%lld %lld", &a, &b) != EOF)
    {
        long long int max=(a>b)?a:b;
        long long int min=(a<b)?a:b;
        printf("%lld\n", (max-min));
    }
    return 0;
}