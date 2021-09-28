#include <stdio.h>

int main(){
    float vMax, vVeiculo;
    scanf(" %f %f", &vMax, &vVeiculo);
    if(vVeiculo<vMax){
        printf("R$ 0.00\n0");
    }else if(vVeiculo<=vMax*1.2){
        printf("R$ 85.13\n4");
    }else if(vVeiculo<=vMax*1.5){
        printf("R$ 127.69\n5");
    }else{
        printf("R$ 574.62\n7");
    }
    return 0;
}