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
    int swap;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;
            }
        }
    }
    printf("Sorted array: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return(0);
}
