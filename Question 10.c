#include <stdio.h>
int main()
{
    int i=0;
    int j=0;
    int row=0;
    int column=0;
    int count=0;
    int times=0;
    int pos=0;
    printf("Please Enter that how many Rows of Matrix you want to enter: ");
    scanf("%d",&row);
    printf("Please Enter that how many Columns of Matrix you want to enter: ");
    scanf("%d",&column);
    int arr[row][column];
    int a[row];
    printf("\nNow Enter Values in an Array of %dX%d:\n\n",row,column);
    for(i=0;i<row;i++)
    {
        count=0;
        for(j=0;j<column;j++)
        {
            printf("Enter an integer value for row %d and column %d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1)
            {
                count++;
            }
        }
        a[i]=count;
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            if(a[i]<=a[j]&&i!=j)
            {
                break;
            }
        }
        if(j==row)
        {
            pos=i;
            times=a[i];
            break;
        }
    }
    if(times>0)
    {
        printf("\nThere are %d times integer 1 entered in the Row No.%d which is maximum",times,pos+1);
        printf(" from the other rows in the given matrix of %dX%d.\n",row,column);
    }
    else
    {
        printf("\nThere is not any row in which integer 1 entered maximum times from the other rows");
        printf(" in the given matrix of %dX%d.\n",row,column);
    }
    return 0;
}
