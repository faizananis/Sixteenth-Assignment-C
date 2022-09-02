#include <stdio.h>
int main()
{
    int i=0;
    int j=0;
    int row=0;
    int column=0;
    printf("Please Enter that how many Rows of matrix you want to enter: ");
    scanf("%d",&row);
    printf("Please Enter that how many Columns of matrix you want to enter: ");
    scanf("%d",&column);
    int arr[row][column];
    int sumR[row];
    int sumC[column];
    printf("\nNow Enter integer values in a Matrix of %dX%d:\n\n",row,column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("Enter integer number for the Row %d and Column %d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<row||i<column;i++)
    {
        sumR[i]=0;
        sumC[i]=0;
        for(j=0;j<column||j<row;j++)
        {
            if(j<column)
            sumR[i]=sumR[i]+arr[i][j];
            if(j<row)
            sumC[i]=sumC[i]+arr[j][i];
        }
    }
    for(i=0;i<row;i++)
    {
        printf("The Sum of Row No.%d of the given Matrix is: %d\n",i+1,sumR[i]);
    }
    printf("\n");
    for(j=0;j<column;j++)
    {
        printf("The Sum of Column No.%d of the given Matrix is: %d\n",j+1,sumC[j]);
    }
    return 0;
}
