#include <stdio.h>
void upperTriangle(int,int);
int main()
{
    int i=0;
    int j=0;
    int size=0;
    printf("Please Enter that how many Rows and Columns of ");
    printf(" Square Matrix you want to enter: ");
    scanf("%d",&size);
    int arr[size][size];
    printf("\nNow Enter integer values in the square matrix of %dX%d:\n\n",size,size);
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("Enter integer for Row %d and Column %d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe Upper Triangle of the given square matrix of %dX%d is:\n\n",size,size);
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(j>=i)
            {
                if(arr[i][j]/10==0)
                printf(" ");
                printf(" %d",arr[i][j]);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
