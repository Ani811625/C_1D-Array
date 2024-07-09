//To calculate the product of the digits of an array.
#include<stdio.h>
void main()
{
    int i,n,pro=1;
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
        pro=pro*arr[i];
    }
    printf("The product of the elements of the array is:\n%d",pro);
}