/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float lado1, lado2, lado3;
    
    printf("Insira o primeiro lado do triângulo: ");
    scanf("%f", &lado1);
    
    printf("Insira o segundo lado do triângulo: ");
    scanf("%f", &lado2);
    
    printf("Insira o terceiro lado do triângulo: ");
    scanf("%f", &lado3);
    
    if (lado1 == lado2 && lado2 == lado3)
        printf("É um triângulo equilátero!!");
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
        printf("É um triângulo isósceles!!");
    else
        printf("É um triângulo escaleno!!");
    
    return 0;
}
