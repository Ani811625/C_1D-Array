//WAP to add 10 to the value of array at even index and multiply by 2 in the odd index.
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the value of the array at %d position:\n",i);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(j%2==0)
        {
            arr[j]=arr[j]+10;
        }
        else
        {
            arr[j]=arr[j]*2;
        }
        printf("The array at %d position is :\n%d\n",j,arr[j]);
    }
}