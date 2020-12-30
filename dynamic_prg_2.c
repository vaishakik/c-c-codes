#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char a[15],b[15];
    int c[15][15];
    int i,j,k;
    memset(c,0,sizeof(c));
    printf("Enter str 1");
    scanf("%s",a);
    printf("Enter the str 2");
    scanf("%s",b);
    for(i=0;i<=strlen(b);i++)
    {
        for(j=0;j<=strlen(a);j++)
        {   if(i!=0 && j!=0)
        {
            if(a[i]==b[i])
            {
                if(c[i][j-1]>c[i-1][j]  || c[i][j-1]==0 || c[i-1][j]==0)
                {
                   c[i][j]=c[i][j-1]+1;
                   printf("%d\t",c[i][j]);
                }
                else
                {
                    c[i][j]=c[i-1][j]+1;
                    printf("%d\t",c[i][j]);
                }
            }
        }

        }
        printf("\n");
    }
   i=strlen(a);
 //  printf("%d",i);
   j=strlen(b);
   printf("%d",c[i][j]) ;
    return 0;
}
