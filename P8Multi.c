#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int w,x,y,z,u,s,t,r;
    bool a;
    int i=0;
    int j=0;
    int k=0;
    a=true;
    while(a){
        srand(time(NULL));
        x=1+rand()%10;
        y=1+rand()%10;
        z=x*y;
        bool b=true;
        while(b){
            printf("¿cuánto es %d veces %d?",x,y);
            i=i+1;
            
            scanf("%d",&w);
            if(z==w){
                j=j+1;
                t=1+rand()%4;
                switch(t){
                    case 1:printf("¡Muy bien!");
                    break;
                    case 2:printf("¡Excelente!");
                    break;
                    case 3:printf("¡Buen trabajo!");
                    break;
                    case 4:printf("¡Sigue haciéndolo bien!");
                    break;  
                }
                printf("¿deseas volver a multiplicar? 1:si ó 2:no");
                scanf("%d",&u);
                if(u==1){
                    i=i+1;
                    printf(&i);
                    b=false;
                }
                else{
                    a=false;
                    b=false;
                    printf("Respuestas correctas:%d",i);
                    printf("\nPrograma finalizado.");
                }
            }
            else {
                k=k+1;
                r=1+rand()%4;
                switch(r){
                    case 1:printf("No. Por favor trata de nuevo");
                    break;
                    case 2:printf("Incorrecto. Trata una vez más");
                    break;
                    case 3:printf("¡No te rindas!");
                    break;
                    case 4:printf("No. Trata de nuevo");
                    break;  
                }
                printf("\n¿Desea volver a intentarlo? 1:si ó 2:no \n");
                scanf("%d",&s);
                if(s==1){
                    a=true;
                    j=j+1;
                }
                else{
                    a=false;
                    b=false;
                    
                      
                }
            }
            
            
        }
        
    }
    
    
}