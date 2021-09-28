#include <stdio.h>

int main(){
    float temperatura;
    char sintomas;
    //printf("Sua temperatura: ");
    scanf(" %f", &temperatura);
    //printf("Está tendo secreção, tosse e dor no corpo? (S/N): ");
    scanf(" %c", &sintomas);
    if((temperatura<37 && sintomas == 'S') || (temperatura>=37 && sintomas=='N')){
        printf("Exames Basicos");
    }else if(temperatura<37 && sintomas == 'N'){
        printf("Liberado");
    }else if(temperatura>=37 && sintomas == 'S'){
        printf("Exames Especiais");
    }else{
        printf("Erro");
    }
    return 0;
}