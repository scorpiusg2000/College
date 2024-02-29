#include<stdio.h>

int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: \n");
    for(int i=0; i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int dup[max+1];
    for(int i=0;i<max+1;i++)
    {
        dup[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        dup[arr[i]]++;
    }
    int count=0;
    for(int i=0;i<max+1;i++)
    {
        if(dup[i]>1)
        {
            count++;
        }
    }
    printf("Number of duplicate elements is: %d", count);
    return(0);
}
