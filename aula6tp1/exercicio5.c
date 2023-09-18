#include <stdio.h>

int main()
{
   	 float PQ, C, R, S,VF;
   	 float VPQ = 2, VC = 3, VR = 5, VS = 3;
   	
   	printf("quantidade de Paes de Queijo?");
    scanf("%f" , &PQ);
 	printf("quantidade de Coxinhas?");
    scanf("%f" , &C);
    printf("quantidade de Refrigerantes?");
    scanf("%f" , &R);
    printf("quantidade de Sucos?");
    scanf("%f" , &S);
 
    VF = (VPQ * PQ) + (VC * C) + (VR * R) + (VS * S); 
    
    printf("O total a ser pago sera de %.2f" , VF);
    
    return 0;
}
