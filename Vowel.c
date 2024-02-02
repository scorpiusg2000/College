#include<stdio.h>

int main()
{
  char a;
  printf("Enter a character: ");
  scanf("%c", &a);
  if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
  {
    printf("The character is vowel. \n");
  }
  else if (a>=66 && a<=90 && a!='A' && a!='E' && a!='I' && a!='O' && a!='U')
  {
    printf("The character is a consonant.\n");
  }
  else if (a>=97 && a<=122 && a!='a' && a!='e' && a!='i' && a!='o' && a!='u')
  {
    printf("The character is a consonant.\n");
  }
  else
  {
    printf("The character is not an alphabet.\n");
  }
  return (0);
}
