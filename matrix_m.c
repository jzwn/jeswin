#include<stdio.h>
int main()
{
        int i,j,rows1,columns1,rows2,columns2;
        printf("Enter the number of Matrix A Rows : ");
        scanf("%d",&rows1);
        printf("Enter the number of Matrix A Columns : ");
        scanf("%d",&columns1);
	printf("Enter the number of Matrix B Rows : ");
        scanf("%d",&rows2);
        printf("Enter the number of Matrix B Columns : ");
        scanf("%d",&columns2);

	int a[rows1][columns1],b[rows2][columns2],c[rows1][columns2];

	printf("Enter Matrix A elements : \n");
        for (i=0;i<rows1;i++)
        {
		printf("\n");
                for (j=0;j<columns1;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }

	printf("Enter Matrix B elements : \n");
        for (i=0;i<rows2;i++)
        {
		printf("\n");
                for (j=0;j<columns2;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }

	for (i=0;i<rows1;i++)
        {
                for (j=0;j<columns2;j++)
                {
			for(int k=0;k<columns1;k++)
			{
				c[i][j]=a[i][k]*b[k][j];
			}
                }
        }

	printf("Multiplied Array : ");
	printf("Matrix A + Matrix B : \n");
	for (i=0;i<rows1+rows2;i++)
        {
		printf("\n");
                for (j=0;j<columns1+columns2;j++)
                {
                        printf("%d\t",c[i][j]);
                }
        }
	printf("\n");
	return 0;
}
