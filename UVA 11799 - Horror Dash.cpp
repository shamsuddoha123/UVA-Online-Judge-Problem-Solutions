#include<stdio.h>
int main()
{
    int test,numOfStudent,speed,maxSpeed,count=0;
    scanf("%d", &test);
    while(test--)
    {
        maxSpeed=1;
        scanf("%d", &numOfStudent);
        while(numOfStudent--)
        {
            scanf("%d", &speed);
            if(maxSpeed<speed)
            {
                maxSpeed=speed;
            }
        }
        count++;
        printf("Case %d: %d\n", count, maxSpeed);
    }
    return 0;
}