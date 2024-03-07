#include<stdio.h>

int main()
{
    int i,j;
    printf("Enter dimensions of matrix: ");
    scanf("%d%d", &i,&j);
    int arr[i][j], tra[j][i];
    printf("Enter elements of matrix: ");
    for(int a=0;a<i;a++)
    {
        for(int b=0;b<j;b++)
        {
            scanf("%d", &arr[a][b]);
        }
    }
    printf("Original matrix: \n");
    for(int a=0;a<i;a++)
    {
        for(int b=0;b<j;b++)
        {
            printf("%d ", arr[a][b]);
        }
        printf("\n");
    }
    for(int a=0;a<j;a++)
    {
        for(int b=0;b<i;b++)
        {
            tra[a][b]=arr[b][a];
        }
    }
    printf("Transpose matrix: \n");
    for(int a=0;a<j;a++)
    {
        for(int b=0;b<i;b++)
        {
            printf("%d ", tra[a][b]);
        }
        printf("\n");
    }
    return(0);
}
