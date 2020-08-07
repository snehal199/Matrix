int x,y,z;

int multiply(int a[x][y],int b[y][z])
{
	int c[x][z];
      for (int i = 0; i < x; ++i) 
      {
          for (int j = 0; j <z; ++j)
	  {
              for (int k = 0; k < y; ++k) {
            c[i][j] += a[i][k] * b[k][j];
         }
      }
   }
      return c[x][z];
}
