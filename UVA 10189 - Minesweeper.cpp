#include <stdio.h>
int main()
{
    char x[101][101];
    int y[101][101];
    int n,m,i,j;
    int field=1;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        if(n==0 && m==0)
        {
            break;
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                scanf(" %c", &x[i][j]);
                y[i][j]=0;
            }
        }

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(x[i][j]=='*')
                {
                    y[i-1][j-1]++;
                    y[i-1][j]++;
                    y[i-1][j+1]++;
                    y[i][j-1]++;
                    y[i][j+1]++;
                    y[i+1][j-1]++;
                    y[i+1][j]++;
                    y[i+1][j+1]++;
                }
            }
        }

        if(field!=1)
        {
            printf("\n");
        }

        printf("Field #%d:\n", field++);

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(x[i][j]=='*')
                {
                    printf("*");
                }    
                else 
                {
                    printf("%d", y[i][j]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}