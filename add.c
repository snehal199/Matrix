int m,n;

int add(int a[m][n],int b[m][n])
{
	int c[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	return c[m][n];
}

