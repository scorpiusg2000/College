#include<stdio.h>

int main()
{
    int x,y,sol=1;
    printf("Enter base: ");
    scanf("%d", &x);
    printf("Enter power: ");
    scanf("%d", &y);
    for(int i=1; i<=y; i++)
    {
        sol=sol*x;
    }
    printf("Solution is %d\n", sol);
    return(0);
}
