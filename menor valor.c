/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float valor1, valor2, valor3;
    
    printf("insira o valor 1: ");
    scanf("%f",&valor1);
    
    printf("insira o valor 2: ");
    scanf("%f",&valor2);
    
    printf("insira o valor 3: ");
    scanf("%f",&valor3);
    
    if (valor1 < valor2 && valor1 < valor3) {
        printf("o valor 1 é o menor");
    } else if (valor2 < valor1 && valor2 < valor3) {
        printf("o valor 2 é o menor");
    } else {
        printf("o valor 3 é o menor");
}

}