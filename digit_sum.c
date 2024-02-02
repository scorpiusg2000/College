#include<stdio.h>

int main()
{
  int a;
  printf("Enter a 4 digit number: ");
  scanf("%d", &a);
  int r=0;
  int sum=0;
  for (int i=1; i<=4; i++)
  {
    r=a%10;
    sum +=r;
    a=a/10;
  }
  printf("Sum of the digits of the number is: %d", sum);
  return(0);
}
