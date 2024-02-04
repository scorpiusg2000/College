#include<stdio.h>

int main()
{
    int sum=0;
    for(int i=21; i<30;i++)
    {
        if(i%2==0 && i%3==0)
        {
            sum = sum+i;
        }
        else if(i%2==0)
        {
            sum = sum+i;
        }
        else if(i%3==0)
        {
            sum = sum+i;
        }
        
        else
        {
            continue;
        }
    }
    printf("%d", sum);
    return(0);
}
