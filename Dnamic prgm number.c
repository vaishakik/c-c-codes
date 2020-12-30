#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int a[16],i,j,k=0;
    int b[]={3,5,10};
    memset(a,0,sizeof(a));
    a[0]=1;
    for(i=0;i<3;i++)
    {
        for(k=0,j=b[i];j<=15;k++,j++)
    {
      if(a[k]==1)
            a[j]=a[j]+1;
    }
    }
    printf("%d",a[15]);
    return 0;
}
