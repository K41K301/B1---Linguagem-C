/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float celsius; 
    
    float farenheit;

    
    printf ("insira a temperatura em celsius:  \n");
    scanf ("%f", &celsius);

    printf("a temperatura em farenheit é: %.2f", celsius * 9/5 + 32 );
    
    return 0;
}