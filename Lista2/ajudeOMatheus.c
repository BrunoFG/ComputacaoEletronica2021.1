#include <stdio.h>

int main(){
    int dinheiro, x0, x1, y0, y1, z0, z1;
    scanf(" %d", &dinheiro);
    scanf(" %d %d %d %d %d %d", &x0, &x1, &y0, &y1, &z0, &z1);
    int palheta=x0, cordas=y0, pedal=z0;
    if(x0+y0+z0>dinheiro || x1+y1+z1<dinheiro){
        printf("N");
    }else{
        dinheiro = dinheiro - (x0+y0+z0);
        for(int i=dinheiro; i>0; i--){
            if(cordas<=y1){
                cordas++;
            }else if(pedal<=z1){
                pedal++;
            }else{
                palheta++;
            }
        }
        printf("S\n%d %d %d", palheta, cordas, pedal);
    }
    return 0;
}