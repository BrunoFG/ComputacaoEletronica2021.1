#include <stdio.h>

int main(){
    int n;
    do{
        scanf(" %d", &n);
    }while(n<1);
    double somatorio = 0.;
    int factorial = 1;
    for(int k=0; k<=n-1; k++){
        for (int f=2; f<=k; f++){
            factorial *= f;
        }
        somatorio += 1.0/factorial;
        factorial=1;
    }
    printf("%.15lf", somatorio);
}