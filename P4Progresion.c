#include <stdio.h>
#include <math.h>

int main()
{
    double x, n, i;
    double suma = 0;
    printf ("Valor de X : ");
    scanf ("%lf", &x);
    printf ("Valor de N : ");
    scanf ("%lf", &n);
    for(i = 0; i < n; i++)
    {
    suma += pow(x, i);
    }
    printf ("El resultado es: %lf \n", suma);
    return 0;
}
