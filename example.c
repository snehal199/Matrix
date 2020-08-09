#include "header.h"
int main()
{
	int r1,c1,r2,c2;
        printf("Enter dimensions of first matrix:");
	scanf("%d%d",&r1,&c1);
	printf("Enter dimensions of second matrix:");
        scanf("%d%d",&r2,&c2);
	int a[r1][c1],b[r2][c2];
	printf("Enter first matrix:");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
        printf("Enter second matrix:");
        for(int i=0;i<r2;i++)
        {
                for(int j=0;j<c2;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }
	int *p;
        p=add(r1,c1,&a[0][0], &b[0][0]);
	printf("Addition:");
        for(int i=0;i<r1;i++)
        {
                for(int j=0;j<c1;j++)
                {
                        printf("%d",*((p+i)+j));
                }
		printf("\n");
        }
}

