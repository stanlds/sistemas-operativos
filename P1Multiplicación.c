#include <stdio.h>

int main()
{ 
	   int i;
	   int j;
	   int r;
	   printf ("Ingrese hasta que numero quiere calcular\n");
	   scanf("%d",&r);

	for (i=1; i<=10; i++)
	{
		  printf ("\n");
		  for (j=1; j<=r;j++)
			printf("%d x %d = %d \n", i,j,i*j);
	}	
	return 0;
}

