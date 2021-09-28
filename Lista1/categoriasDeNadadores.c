#include <stdio.h>

int main(){
    int idade;
    scanf(" %d", &idade);
    if(idade<5){
        printf("Idade invalida.");
    }else if(idade<=7){
        printf("Infantil A");
    }else if(idade<=10){
        printf("Infantil B");
    }else if(idade<=13){
        printf("Juvenil A");
    }else if(idade<=17){
        printf("Juvenil B");
    }else if(idade<=40){
        printf("Adulto");
    }else{
        printf("Master");
    }
}