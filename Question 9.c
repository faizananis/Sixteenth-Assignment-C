#include <stdio.h>
int main()
{
    int i=0;
    int j=0;
    int count1=0;
    int count2=0;
    int row=0;
    int column=0;
    printf("Please Enter that how many Rows of Matrix you want to store: ");
    scanf("%d",&row);
    printf("Please Enter that how many Columns of Matrix you want to store: ");

    scanf("%d",&column);
    int arr[row][column];
    printf("\nPlease Enter integer values in a Matrix of %dX%d:\n\n",row,column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("Enter an integer for the row %d and column %d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==0)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
    }
    if(count1>count2)
    {
        printf("\nThe Given Matrix of %dX%d is a Sparse Matrix.\n",row,column);
    }
    else
    {
        printf("\nThe Given Matrix of %dX%d is not a Sparse Matrix.\n",row,column);
    }
    return 0;
}
