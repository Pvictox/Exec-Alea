/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int fibonnaci(int n){
    if (n == 1 ){
        return 1;
    }else{
        if (n ==2 ){
            return 1;
        }else{
            return fibonnaci(n-1) + fibonnaci(n-2);
        }
    }
}


int get_razao_PA(int termo_n, int primeiro_termo, int quantidade){
    return (termo_n-primeiro_termo)/(quantidade-1);
}

int get_razao_PG(int sucessor, int antecessor){
    return sucessor/antecessor;
}

int return_power(int index){
    return index*index;
}

int main()
{
   printf("LETRA A\n");
   printf("Razão da PA: %d\n", get_razao_PA(7,1,4));
   printf("Valor procurado: %d\n", 7+get_razao_PA(7,1,4));
   printf("================\n");
   printf("LETRA B\n");
   printf("Razão da PG: %d\n", get_razao_PG(64,32));
   printf("Valor procurado: %d\n", 64*get_razao_PG(16,8));
   printf("================\n");
   printf("LETRA C\n");
   printf("Valor procurado: %d\n", return_power(7));
   printf("================\n");
   printf("LETRA D\n");
   printf("Valor procurado: %d\n", return_power(7));
   printf("================\n");
   printf("LETRA E\n");
   printf("Valor procurado: %d\n", fibonnaci(7));
   printf("LETRA F\n");
   printf("Valor procurado: %d\n", 200);
}
