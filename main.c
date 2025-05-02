#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, r1, r2 ,c1, c2, sum=0;
    int A[10][10], B[10][10], result[10][10];

    printf("Enter the number of Rows and Col for Matrix A:");
    scanf("%d %d", &r1 , &c1);

    printf("Enter the number of Rows and Col for Matrix B:");
    scanf("%d %d", &r2 , &c2);


    while(c1!=r2)
    {
        printf("Error!\n");

        printf("Enter the number of Rows and Col for Matrix A:");
        scanf("%d %d", &r1 , &c1);

        printf("Enter the number of Rows and Col for Matrix B:");
        scanf("%d %d", &r2 , &c2);

    }


    printf("Enter elements for matrix A:\n");
    for(i=0;i<r1;i++)
    {
       for(j=0;j<c1;j++)
        {
           printf("A[%d][%d]=", i, j);
           scanf("%d", &A[i][j]);
       }
       printf("\n");
    }

    printf("Enter elements for matrix B:\n");
    for(i=0;i<r2;i++)
    {
       for(j=0;j<c2;j++)
        {
           printf("B[%d][%d]=", i, j);
           scanf("%d", &B[i][j]);
       }
       printf("\n");
    }


    printf("\nMatrix A:\n");
    for(i=0;i<r1;i++)
    {

       for(j=0;j<c1;j++)
       {
           printf("%d ", A[i][j]);
       }
       printf("\n");
    }


    printf("\nMatrix B:\n");
    for(i=0;i<r2;i++)
    {

       for(j=0;j<c2;j++)
       {
           printf("%d ", B[i][j]);
       }
       printf("\n");
    }
    //multiplying
    for(i=0; i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1; k++)
            {
                sum=sum+A[i][k]*B[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }

    printf("\nResult:\n");
    for(i=0;i<r1;i++)
    {

       for(j=0;j<c2;j++)
       {
           printf("%d ", result[i][j]);
       }
       printf("\n");
    }

    return 0;
}
