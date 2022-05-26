#include <stdio.h>

int main(){
    float altura, peso, imc;

    printf("Olá! Vamos calcular seu IMC? \n");
    printf("Insira sua altura, em metros: ");
    scanf("%f", &altura);
    printf("Insira seu peso: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    if(imc > 18.5 && imc < 25){
        printf("Seu IMC é: %.2f \n", imc);
        printf("Você está dentro do seu peso ideal!");
    }
    if(imc > 25){
        printf("Seu IMC é: %.2f \n", imc);
        printf("Você está acima do seu peso ideal!");
    }
    if(imc < 18.5){
        printf("Seu IMC é: %.2f \n", imc);
        printf("Você está abaixo do seu peso ideal!");
    }

}
