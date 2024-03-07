#include<stdio.h>

int main()
{
    int i,j,m,n;
    printf("Enter dimensions of first matrix: ");
    scanf("%d%d", &i,&j);
    printf("Enter dimensions of second matrix: ");
    scanf("%d%d", &m,&n);
    int mat1[i][j], mat2[m][n], mat3[i][j];
    printf("Enter elements of first matrix: ");
    for(int a=0;a<i;a++)
    {
        for(int b=0;b<j;b++)
        {
            scanf("%d", &mat1[a][b]);
        }
    }
    printf("Enter elements of second matrix: ");
    for(int a=0;a<m;a++)
    {
        for(int b=0;b<n;b++)
        {
            scanf("%d", &mat2[a][b]);
        }
    }
    printf("First matrix: \n");
    for(int a=0;a<i;a++)
    {
        for(int b=0;b<j;b++)
        {
            printf("%d ", mat1[a][b]);
        }
        printf("\n");
    }
    printf("Second matrix: \n");
    for(int a=0;a<m;a++)
    {
        for(int b=0;b<n;b++)
        {
            printf("%d ", mat2[a][b]);
        }
        printf("\n");
    }
    if(i!=m || j!=n)
    {
        printf("Matrices cannot be added. \n");
        return(0);
    }
    else
    {
        for(int a=0;a<i;a++)
        {
            for(int b=0;b<j;b++)
            {
                mat3[a][b]=mat1[a][b]+mat2[a][b];
            }
            printf("\n");
        }
        printf("Result: \n");
        for(int a=0;a<i;a++)
        {
            for(int b=0;b<j;b++)
            {
                printf("%d ", mat3[a][b]);
            }
            printf("\n");
        }
        return(0);
    }
}
