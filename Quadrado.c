#include <stdio.h>

int main(){
    printf("Número \t Quadrado \t Cubo\n");
    printf("--------------------------\n");
    for(int i = 0;i<=10;i++){
        int quadrado = i * i;
        int cubo = i * i * i;
    printf("%d \t\t %d \t\t %d \n", i,quadrado,cubo);
    }
    
}
