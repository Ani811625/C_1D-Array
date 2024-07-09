//Give an array of marks of students,if the mark of any student is less than 35 print its roll no.
#include<stdio.h>
int main()
{
    int arr[10];
    for(int i=0;i<=9;i++)
    {
        printf("Enter the marks for roll no.%d\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The students who failed are:\n");
    for(int j=0;j<=9;j++)
    {
        if(arr[j]<35)
        {
            printf("Roll no.:\n%d\n",j+1);
        }
        //else continue;
    }
}