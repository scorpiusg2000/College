#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    int i=1;
    int k,max;
    if (a>b)
    {
        max=b;
    }
    else if (a<b)
    {
        max=a;
    }
    int rema, remb;
    if(a%b==0)
    {
            printf("GCD of %d and %d is %d.\n", a,b,b);
    }
    else if(b%a==0)
    {
            printf("GCD of %d and %d is %d.\n", a,b,a);
    }
    else
    {
        for (i;i<=max; i++)
        {
            rema=a%i;
            remb=b%i;        
            if(rema==0 && remb==0)
            {
                
                k=i;       
                
            }
        }
        printf("GCD of %d and %d is %d.\n", a,b,k);
    }
    
    return (0);
}
