#include<stdio.h>
int main()
{
    int i,n,smax;
    
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the value of the array at %d position:\n",i);
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int j=0;j<n;j++)
    {
        if(max<arr[j])
        {
            smax=max;
            max=arr[j];
        }
    }
    printf("The second greatest element in the whole array is :\n%d",smax);
}