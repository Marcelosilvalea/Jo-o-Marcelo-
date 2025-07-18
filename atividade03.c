#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    int soma, subtracao, multiplicacao, divisao, resto, quociente;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    if (num2 != 0){
        printf("Numero não pode ser dividido por zero");
    }

        divisao = num1 / num2;
        resto = num1 % num2;
        quociente = num1 / num2;
    

        printf("Soma: %d\n", soma);
        printf("Subtracao: %d\n", subtracao);
        printf("Multiplicacao: %d\n", multiplicacao);
        printf("Divisao: %d\n", divisao);
        printf("Resto: %d\n", resto);
        printf("Quociente: %d\n", quociente);

    return 0;
}

#include <stdio.h>

int main(){
    int total = 100;
    float iva;
    float irs;
    printf("informe o valor do IVA:");
    scanf("%s",iva);
    printf("informe o valor do IRS: ");
    scanf("%s",irs);
    float liq = total - (iva + irs);
    printf("\n");
    printf("total   =   %d\n", total);
    printf ("IVA    =   %f\n",iva);
    printf ("IRS    =   %f\n",irs);
    printf ("------------\n");
    printf ("LIQ.    =   %f\n",liq);
}

#include <stdio.h>
#include <stdlib.h>
int main(){
    int num1;
    int num2;
    printf("Informe num1: ");
    scanf("%s",&num1);
    printf("Informe num2: ");
    scanf("%s",&num2);
    int resto = num1 % num2;
    if (resto = 0){
        printf("O numero 1 é mutiplo do numero 2.");
    
else if(resto < 0){
 printf("O numero não é mutiplo.");
}
    
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1 = 10;
    int num2 = 7;
    int soma, subtracao, multiplicacao, divisao, resto, quociente;
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
        divisao = num1 / num2;
        resto = num1 % num2;
        quociente = num1 / num2;
    

        printf("Soma: %d\n", soma);
        printf("Subtracao: %d\n", subtracao);
        printf("Multiplicacao: %d\n", multiplicacao);
        printf("Divisao: %d\n", divisao);
        printf("Resto: %d\n", resto);
        printf("Quociente: %d\n", quociente);

    return 0;
}

