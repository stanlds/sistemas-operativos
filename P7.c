#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int w,x,y,z,u,s;
    bool a;
    a=true;
    while(a){
        srand(time(NULL));
        x=1+rand()%10;
        y=1+rand()%10;
        z=x*y;
        bool b=true;
        while(b){
            printf("¿cuánto es %d veces %d?",x,y);
            scanf("%d",&w);
            if(z==w){
                printf("¡Muy bien! \n");
                printf("¿deseas volver a multiplicar? 1:si ó 2:no");
                scanf("%d",&u);
                if(u==1){
                    b=false;
                }
                else{
                    a=false;
                    b=false;
                    printf("Programa finalizado.");
                }
            }
            else {
                printf("No es correcto.¿Desea volver a intentarlo? 1:si ó 2:no \n");
                scanf("%d",&s);
                if(s==1){
                    a=true;
                }
                else{
                    a=false;
                    b=false;    
                }
            }
            
            
        }
        
    }
    
}