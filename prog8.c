#include<stdio.h>
int main()
{
    int i,n,x;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
     printf("Enter the value of x :\n");
    scanf("%d",&x);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the value of the array at %d position:\n",i);
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]>x)
        {
            count++;
        }
        /*else
        {
            continue;
        }*/
    }
    printf("The number of array elements greater than %d are:\n%d",x,count);
}