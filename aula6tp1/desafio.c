#include <stdio.h>

int main()
{
    float CF, A = 365, AF;
   	float  DV, calc, V;
   	
   	 
   	
   	printf("quantos cigarros fumados por dia ?");
    scanf("%f" , &CF);
 	printf("quantos anos vc ja fumou ?");
    scanf("%f" , &AF);
 

 V = (CF * 10) * ((AF * 365) / 1440);
 
 
    
    printf("O total de dias de vida ele perdeu foi %.f" , V);
    return 0;
}



