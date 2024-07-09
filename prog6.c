//To accept the array and display the smallest element among them.
#include<stdio.h>
int main()
{
    int i,n;
    //int min=101;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the value of the array at %d position:\n",i);
        scanf("%d",&arr[i]);
    }
     int min=arr[0];
    for(int j=0;j<n;j++)
    {
        if(min>arr[j])
        {
            min=arr[j];
        }
    }
    printf("The smallest element in the whole array is :\n%d",min);
}