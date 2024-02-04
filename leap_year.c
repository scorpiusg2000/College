#include<stdio.h>

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if(year%4==0)
    {
        printf("Entered year is a leap year.\n");
    }
    else
    {
        printf("Entered year is not a leap year.\n");
    }
    return(0);
}
