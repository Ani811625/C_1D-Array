#include<stdio.h>
int main()
{
    int i,n,smax;
    
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the value of the array at %d position:\n",i);
        scanf("%d",&a[i]);
    }
    int b[n];
    for(i=0;i<n;i++)
    {
        b[i]=a[n-(i+1)];
        printf("The element of  array b in %d position is :\n%d\n ",i,b[i]);
    }
}
