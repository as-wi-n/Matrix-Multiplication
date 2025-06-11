#include <stdio.h>
int main()
{
    int i,j,k,row1,row2,col1,col2,sum=0 ;
    printf("enter the rows and coloumns of first matrix\n");
    printf("Rows:");
    scanf("%d",&row1);
    printf("Columns:");
    scanf("%d",&col1);
    int a[row1][col1];
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            printf("enter the %d row and %d column element",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the rows and coloumns of second matrix: \n");
    printf("Rows:");
    scanf("%d",&row2);
    printf("Column:");
    scanf("%d",&col2);
    int b[row2][col2];
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("enter the %d row amd %d column element",i,j);
            scanf("%d",&b[i][j]);
        }
        
    }
    int c[50][50];
    if(col1==row2)
    {
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                for(k=0;k<col1;k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                }
            c[i][j]=sum;
            sum=0;
           }
    
        }    
    }
    else
    {
        printf("the matrices cannot be miltiplied");
        
    }
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    printf("%d",sum);
    return 0;
}

