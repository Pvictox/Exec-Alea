/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int fibonnaci(int valorProcurado){
    int fib1 = 1, fib2=1, soma = 0;
    
    int flag_achou = 0; //0 = falso | 1 = verdadeiro
    
    if (valorProcurado >=0 && valorProcurado <= 2){
        flag_achou = 1;
    }
    while (flag_achou == 0){
        soma = fib2+fib1;
        fib1 = fib2;
        fib2 = soma;
        if (soma == valorProcurado){
            flag_achou = 1;
        }
        if (soma > valorProcurado){
            printf("Valor n pertece");
            return 0;
        }
    }
    
    printf("Valor pertence.");
    
    
}

int main()
{
    fibonnaci(14);

    return 0;
}
