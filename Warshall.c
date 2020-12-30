#include <stdio.h>
#include <stdlib.h>

int subsum(int set[],int setsize,int value)
{int count=0,k,x;
for(x=0;x<pow(2,setsize);x++)
{

    int sum=0;
for(k=0;k<setsize;k++)
    {
        if(x&(1<<k))
        {
            sum=sum+set[k];
        }
    }
    if(sum>=value)
    {
        count++;
    }

}
return count;
}

int main()
{
    int a[]={1 ,3 ,2 ,6 ,1 ,2},val=3,size=6;
    printf("%d",subsum(a,size,val));

}
