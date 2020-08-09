int* add(int row,int col,int *a,int *b)
{
	int* c;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			*((c+i)+j)=*((a+i)+j)+ *((b+i)+j);
		}
	}
	return c;
}

