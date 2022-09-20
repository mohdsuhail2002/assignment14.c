#include<stdio.h>
int main()
{
    int a[10];
    int i;
    int sum=0;
    printf("enter the 10 values");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];

    }
    printf("sum is %d",sum);
    printf("\n");
    return 0;

}