#include <stdio.h>

int main()
{
  int x;
  int y;
  printf ("Inserte el primer número: ");
  scanf ("%d", &x);
  printf ("Inserte el segundo número: ");
  scanf ("%d", &y);
  
  if (x%y==0)
     printf ("Devuelve 1 porque %d no es modulo de %d \n", x, y);
  else 
     printf ("Devuelve 0 porque %d no es modulo de %d \n", x, y);
  return 0;
  printf ("\n");
}
  
