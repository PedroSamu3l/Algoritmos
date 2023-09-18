#include <stdio.h>
int main()
{
   	 float P, PF;
   	 printf("qual o valor do produto ?");
    	scanf("%f" , &P);
    PF = P - (P * 0.05);
    printf("O total a ser pago sera de %.2f" , PF);
    return 0;
}
