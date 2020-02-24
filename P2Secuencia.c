#include <stdio.h>

int main (void)
{
    int renglones;
    int binario; 
    int f;
    printf("Ingrece numero de renglones: ");
    scanf("%d",&renglones);
    binario = 1;
    f = binario;
    
    for(int i = 1; i <= renglones; i++){
         printf("\n"); 
        for(int j = 1; j <= i; j++){
            printf("%d",binario);
            if (binario == 1){
                binario = 0;
            }
            else{
                binario = 1;
            }
        }
        
        if (f == 1){
            f = 0;
        }
        else{
            f = 1;
        }
        binario = f; 
    }
    scanf("%d",&renglones);
}
