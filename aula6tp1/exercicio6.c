#include <stdio.h>

int main()
{
    int D, B, VB = 1;
   	float  VF;  	 
   	printf("quantos dinheiros vc tem?");
    scanf("%d" , &D);
 	printf("quantidade de Bombons ");
    scanf("%d" , &B);
    VF =  D % B * VB;
    printf("O total de bombons q ele consegue comprar e %.2f" , VF);
    return 0;
}
