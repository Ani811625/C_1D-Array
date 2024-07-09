
//To take the input of an array and print the array in reverse order.
#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0;i<=4;i++)
    {
        printf("Enter the element of %d index:\n",i);
        scanf("%d",&arr[i]);
    }
    printf("The value of the array entered in reverse :\n");
    for(int j=4;j>=0;j--)
    {
        printf("The array in %d index is:\n%d\n",j,arr[j]);
    }
    return 0;
}