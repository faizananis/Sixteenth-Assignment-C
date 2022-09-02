#include <stdio.h>
int main()
{
    int i=0;
    int j=0;
    int k=0;
    int row=0;
    int column=0;
    int sum=0;
    printf("Please Enter that how many Rows and Columns of Square Matrix you want to enter: ");
    scanf("%d",&row);
    column=row;
    int arr[row][column];
    printf("\nNow Enter values in a Matrix of %dx%d:\n\n",row,column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("Enter the value for Row %d and Column %d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe Square Matrix of %dx%d you entered is:\n\n",row,column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    k=column-1;
    for(i=0;i<row;i++)
    {
        sum=sum+arr[i][k];
        k--;
    }
    printf("\nThe Sum of Right diagonal of given Square Matrix of %dx%d is: %d\n",row,column,sum);
    return 0;
}
