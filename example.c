#include "header.h"
int main()
{
	int w,x,y,z;
        printf("Enter dimensions of first matrix:");
	scanf("%d%d",&w,&x);
	printf("Enter dimensions of second matrix:");
        scanf("%d%d",&y,&z);
	int a[w][x],b[y][z];
	printf("Enter first matrix:");
	for(int i=0;i<w;i++)
	{
		for(int j=0;j<x;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
        printf("Enter second matrix:");
        for(int i=0;i<y;i++)
        {
                for(int j=0;j<z;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }
        int c[w][z] = add( a[w][x], b[y][z]);
        for(int i=0;i<x;i++)
        {
                for(int j=0;j<z;j++)
                {
                        printf("%d",c[i][j]);
                }
		printf("\n");
        }
}

