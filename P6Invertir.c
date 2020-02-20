#include <stdio.h>
int invertirNumero(int numero);

int main() {
    int numero;
    printf ("Inserte el numero a invertir: ");
    scanf("%d",&numero);
    printf("Numero Inicial: %d \n", numero);
    printf("Numero Final: %d", invertirNumero(numero));
    scanf("%d",&numero);
}

int invertirNumero(int numero){
    int residuo, numeroInv;
    
    while(numero>0){
        residuo = numero%10;
        numero=numero/10;
        numeroInv=numeroInv*10+residuo;
    }
    return numeroInv;
}
