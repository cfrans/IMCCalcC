#include <stdio.h>

int main(){
    float altura, peso, imc;

    printf("Ol�! Vamos calcular seu IMC? \n");
    printf("Insira sua altura, em metros: ");
    scanf("%f", &altura);
    printf("Insira seu peso: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    if(imc > 18.5 && imc < 25){
        printf("Seu IMC �: %.2f \n", imc);
        printf("Voc� est� dentro do seu peso ideal!");
    }
    if(imc > 25){
        printf("Seu IMC �: %.2f \n", imc);
        printf("Voc� est� acima do seu peso ideal!");
    }
    if(imc < 18.5){
        printf("Seu IMC �: %.2f \n", imc);
        printf("Voc� est� abaixo do seu peso ideal!");
    }

}
