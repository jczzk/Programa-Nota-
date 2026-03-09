#include <stdio.h>

int main(){

    int nota;

    printf("Digite a sua nota: ");
    scanf("%d", &nota);
    //A >= 90
    //B >= 80
    //C >= 70
    //D >= 60
    //E >= 50 
    if (nota >= 90){
        printf("O Conceito e A!\n");
    }else if (nota >= 80){
        printf("O Conceito e B!!\n");
    }else if (nota >= 70){
        printf("O Conceito e C!!\n");
    }else if (nota >= 60){
        printf("O Conceito e D!!\n");
    }else if (nota >= 50){
        printf("O Conceito e E!\n");
    }else{
        printf("O Conceito e F!\n");
    }
}