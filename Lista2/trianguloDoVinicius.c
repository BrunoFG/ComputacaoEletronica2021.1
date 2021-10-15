#include <stdio.h>
int main(){
    char letra;
    do{
        scanf(" %c", &letra);
    }while(letra<'A' || letra>'Z');
    int num = letra-'A'+1; // num = número correspondente a letra
    int control = 2;
    for (int l=1; l<=num; l++){
        for (int p=num-l; p>0; p--){
            printf(".");
        }
        for (int j=1; j<=(2*l)-1; j++){
            if(j<=l){
                printf("%c", j+64);
            }else{
                printf("%c", j+64-control);
                control+=2;
            }
        }
        control=2;
        for (int p=num-l; p>0; p--){
            printf(".");
        }
        printf("\n");
    }
}