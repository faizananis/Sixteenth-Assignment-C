#include <stdio.h>
int main()
{
    int i=0;
    int j=0;
    int row=0;
    int column=0;
    printf("Please Enter that How many Rows of Matrix you want to Enter: ");
    scanf("%d",&row);
    printf("Please Enter that how many Columns of Matrix you want to Enter: ");
    scanf("%d",&column);
    int arr[row][column];
    int trans[column][row];
    printf("\nNow Enter Values in the Matrix of Row %d anf Column %d:\n\n",row,column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("Enter Value for Row %d and Column %d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe Matrix that you given is:\n\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nThe Transpose of a given Matrix is:\n\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            trans[j][i]=arr[i][j];
        }
    }
    for(i=0;i<column;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d  ",trans[i][j]);
        }
        printf("\n");

    }
    return 0;
}
