#include<stdio.h>
int main()
{
    int n,i,j,min1,min2,p;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d values",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[0]>a[i])
        {
            a[0]=a[i];

        }
    }
    for(i=0;i<=n;i++)
    {
        if(a[0]==a[i])
        {
            p=i;
        }
    }
    for(j=2;j<p;j++)
    {
        if(a[1]>a[j])
        {
            a[1]=a[j];
        }
    }
    printf("min1=%d min2=%d",a[0],a[1]);
    printf("\n");
    return 0;
}