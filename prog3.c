//To calculate the sum of the digits of an array.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the value at %d index:\n",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("The sum of the elements of the array is:\n%d",sum);
    return 0;
}