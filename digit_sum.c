#include<stdio.h>

int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  int b=a;
  int r=0,r_count=0;
  int sum=0;
  int k;
  for (k=1;;k++)
  {
      r_count=a%10;
      a=a/10;
      if(r_count==0 && a==0)
      {
          break;
      }
  }
  for (int i=1; i<=k; i++)
  {
    r=b%10;
    sum +=r;
    b=b/10;
  }
  printf("Sum of the digits of the number is: %d", sum);
  return(0);
}
