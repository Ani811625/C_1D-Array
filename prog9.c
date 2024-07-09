#include<stdio.h>
int main()
{
    int i,n,sum_even=0,sum_odd=0,result;
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
            sum_even=sum_even+arr[j];
        }
        else
        {
            sum_odd=sum_odd+arr[j];
        }
    }
    result=sum_even-sum_odd;
    printf("The difference  is :\n%d\n",result);

}