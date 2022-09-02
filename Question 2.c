#include <stdio.h>
int main()
{
    int i=0;
    int j=0;
    int a[3][3]={0};
    int b[3][3]={0};
    printf("Please Enter Values for First 3x3 Matrix:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter Value for Row %d and Column %d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nNow please Enter Values for Second Matrix:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter Value for Row %d and Column %d: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]=a[i][j]*b[i][j];
        }
    }
    printf("\nThe Product Matrix of the given two Matrices is:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
