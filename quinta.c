/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>




int main()
{
   char texto[30], invertido[30];
   scanf("%s", texto);
  
   int i =0;
   while (texto[i] != '\0'){
       i++;
   }
   
   printf("A frase tem %d tamanho\n", i);
   int tamanho = i;
   for (int j=0; j< tamanho; j++){
       invertido[j] = texto[i-1];
       i-=1;
   }
   
   printf("%s\n", invertido);
   
}
