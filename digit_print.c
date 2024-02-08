#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a=n;
    int b=n;
    int i;
    int rem_1=0, rem_2=0;
    for(i=0;;i++)
    {
        rem_1=a%10;
        a=a/10;
        if(rem_1==0 && a==0)
        {
            break;
        }
        
    }
    printf("Number of digits is: %d \n", i);
    int arr[i];
    for(int k=i-1;k>=0;k--)
    {
        rem_2=b%10;
        b=b/10;
        arr[k]=rem_2;
    }
    for (int j=0;j<i;j++)
    {
        switch(arr[j])
        {
            case 0:
            printf("Zero ");
            break;
            
            case 1:
            printf("One ");
            break;
            
            case 2:
            printf("Two ");
            break;
            
            case 3:
            printf("Three ");
            break;
            
            case 4:
            printf("Four ");
            break;
            
            case 5:
            printf("Five ");
            break;
            
            case 6:
            printf("Six ");
            break;
            
            case 7:
            printf("Seven ");
            break;
            
            case 8:
            printf("Eight ");
            break;
            
            case 9:
            printf("Nine ");
            break;
            
            default:
            break;
        }
    }
    return(0);
}
