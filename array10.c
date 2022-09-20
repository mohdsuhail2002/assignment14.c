#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d values of array",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int num[n];
    for(i=0;i<n;i++)
    {
        num[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",num[i]);
    }
    printf("\n");
    return 0;
}