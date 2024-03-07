#include<stdio.h>

int main()
{
    int n;
    printf("Enter dimension of matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter elements of matrix: ");
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<n;b++)
        {
            scanf("%d", &arr[a][b]);
        }
    }
    printf("Provided matrix: \n");
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<n;b++)
        {
            printf("%d ", arr[a][b]);
        }
        printf("\n");
    }
    int check1,check2,check3;
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<n;b++)
        {
            if(arr[a][b]==arr[b][a])
            {
                check1=1;
            }
            else if(arr[a][b]!=arr[b][a])
            {
                check1=0;
                break;
            }
        }
    }
    if(check1==1)
    {
        printf("Matrix is symmetrical.\n");
    }
    else
    {
        printf("Matrix is not symmetrical.\n");
    }
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<n;b++)
        {
            if(a<b && arr[a][b]==0)
            {
                check2=1;
            }
            else if(a<b && arr[a][b]!=0)
            {
                check2=0;
                break;
            }
        }
    }
    if(check2==1)
    {
        printf("Matrix is lower triangular.\n");
    }
    else
    {
        printf("Matrix is not lower triangular.\n");
    }
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<n;b++)
        {
            if(a!=b && arr[a][b]==0)
            {
                 check3=1;
            }
            else if(a!=b && arr[a][b]!=0)
            {
                check3=0;
                break;
            }
        }
    }
    if(check3==1)
    {
        printf("Matrix is diagonal.\n");
    }
    else
    {
        printf("Matrix is not diagonal.\n");
    }
    int sum=0;
    printf("Sum of diagonals is: ");
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<n;b++)
        {
            if(a==b || n-1==a+b)
            {
                sum=sum+arr[a][b];
            }
        }
    }
    printf("%d\n", sum);
    return(0);
    
}
