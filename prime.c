#include<stdio.h>

int main()
{
    int n;
    int limit;
    printf("Enter a number: ");
    scanf("%d", &limit);
    printf("Prime numbers between 1 and %d are \n", limit);
    printf("2 ");
    for(n=3;n<limit;n++)
    {   
        int check=1;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                check=0;
            }
           
        }
        if(check)
        {
            printf("%d ", n);
        }
    }
    return(0);
}
