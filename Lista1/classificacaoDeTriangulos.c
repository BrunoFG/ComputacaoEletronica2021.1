#include <stdio.h>

int main(){
    int a, b, c;
    scanf(" %d %d %d", &a, &b, &c);
    if(a+b<c || a+c<b || b+c<a){
        printf("Isso não é um triângulo!");
    }else if(a==b && b==c){
        printf("Equilatero");
    }else if(a!=b && b!=c && a!=c){
        printf("Escaleno");
    }else if((a==b)!=c || (a==c)!=b || (b==c)!=a){
        printf("Isosceles");
    }else{
        printf("Easter Egg!");
    }
    return 0;
}