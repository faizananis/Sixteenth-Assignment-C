#include <stdio.h>
int main()
{
    int i=0;
    int j=0;
    int k=0;
    int size=0;
    int sum=0;
    printf("Please Enter that how many Rows and Columns of Square Matrix you want to enter: ");
    scanf("%d",&size);
    int arr[size][size];
    printf("\nNow Enter Value for the Square Matrix of %dx%d:\n\n",size,size);
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("Enter Value for Row %d and Column %d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe Square Matrix of %dx%d you entered is:\n\n",size,size);
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i][k];
        k++;
    }
    printf("\nThe Sum of Left diagonal of a given Square Matrix of %dx%d is: %d\n",size,size,sum);
    return 0;
}
