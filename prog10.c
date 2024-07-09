//WAP to count the total no. of triplets of array elements whose sum is equal to given X.
#include<stdio.h>
int main()
{
    int x, i,n,j=0,count=0,k=0;
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
    for(i=0;i<=n-1;i++)
    {
        while(j!=i && j<n)
        {
            while(k!=j && k!=i && k<n)
            {
            if((arr[i]+arr[j]+arr[k])==x)
            {
                count++;
            }
            k++;
            }
            j++;
        }
    }
    printf("The total no.of triplets are:\n%d",count);
}