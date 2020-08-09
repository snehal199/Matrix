int* multiply(int r1,int r2,int c1,int c2,int *a,int *b)
{
	int m[r1][c2];
	int* p=&m[0][0];
      for (int i = 0; i < r1; ++i) 
      {
          for (int j = 0; j <c2; ++j)
	  {
		  m[i][j]=0;
              for (int k = 0; k < r2; ++k) {
                  m[i][j] += *((a+i)+k)*(*((b+k)+j));
     	      }
          }
 }
      return p;
}
