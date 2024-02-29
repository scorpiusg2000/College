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
    int check, count=0, max_check, max_count=0;
    for(int i=0;i<n;i++)
    {
        check=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]=arr[j])
            {
                count++;
            }
        }
        if(count>max_count)
        {
            max_count=count;
            max_check=check;
        }
    }
    printf("Most repeated element is : %d", max_check);
    return(0);
}
