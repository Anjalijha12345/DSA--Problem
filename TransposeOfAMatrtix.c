#include<stdio.h>
int main()
{
    int row,column;
    scanf("%d%d",&row,&column);
    int arr[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("THE MATRIX IS\n");
    //we printf the n*m order matrix
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("THE TRANSPOSE OF THE MATRIX IS\n");
    for(int j=0;j<column;j++)
    //first I fixed the column and changes values of row only beacuse when we transpose 
    //we fixed the columns and change the rows then when the row loop ends another column starts and the same process repeats
    {
        for(int i=0;i<row;i++)
        {
            printf("%d\t",arr[i][j]);
            //then we print the m*n order matrix which is the transpose of matrix
        }
        printf("\n");
    }
return 0;
}
