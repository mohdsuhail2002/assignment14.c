#include<stdio.h>
int main()
{
    int a[10];
    int i,sum=0;
    float avg;
    printf("enter the 10 values");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];


    }
    avg=sum/10;
    printf("avg is %f",avg);
    printf("\n");
    return 0;
}