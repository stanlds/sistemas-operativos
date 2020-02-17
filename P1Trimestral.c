#include <stdio.h>

int main() {
  float x;
  printf("Inserte el valor Trimestral: ");
  scanf("%f",&x);
  /* Implementacion con if anidados */
  if (x > 50000) {
    x = (((x - 50000) * 0.1) + 3100);
    printf("La comisión es: %f\n" ,x);
    } 
  else if (x >= 20001) {
    x = (((x - 20000) * 0.07) + 1000);
    printf("La comisión es: %f\n" ,x);
    }
  else if(x <= 20000) {
    // nota >= 4.5 --> E
    x = x * 0.05;
    printf("La comisión es: %f\n" ,x);
    }
}
