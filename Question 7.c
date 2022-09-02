#include <stdio.h>
void lowerTriangle(int,int);
int main()
{
    int i=0;
    int j=0;
    int size=0;
    printf("Please Enter that which size of square matrix ");
    printf("you want to store in the 2D Array: ");
    scanf("%d",&size);
    int arr[size][size];
    printf("\nNow Enter integer values in an Square Matrix of size %d:\n\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("Enter integer for Row %d and Column %d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe Lower Triangle of the given square matrix is:\n\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(j<=i)
            {
                if(arr[i][j]/10==0)
                printf(" ");
                printf(" %d",arr[i][j]);
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
