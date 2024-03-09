#include <stdio.h>

void max(int, int, int [*][*]);
int main() 
{
    printf("Enter matrix dimensions: ");
    int m,n;
    scanf("%d%d", &m,&n);
    int arr[m][n];
    printf("Enter array elements: ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Provided matrix: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    max(m,n,arr);
    return(0);
}
void max(int a, int b, int mat[a][b])
{
    int row_max[a];
    int max_r;
    for(int i=0;i<a;i++)
    {
        max_r=mat[i][0];
        for(int j=0;j<b;j++)
        {
            if(mat[i][j]>max_r)
            {
                max_r=mat[i][j];
            }
            row_max[i]=max_r;
        }
    }
    printf("Maximum element of each row is: \n");
    for(int i=0;i<a;i++)
    {
        printf("%d\n", row_max[i]);
    }
    int column_max[b];
    int max_c;
    for(int i=0;i<b;i++)
    {
        column_max[i]=mat[0][i];
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(column_max[j]<mat[i][j])
            {
                column_max[j]=mat[i][j];
            }
        }
    }
    printf("Maximum element of each column is: \n");
    for(int i=0;i<b;i++)
    {
        printf("%d ", column_max[i]);
    }
}
