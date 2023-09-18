#include <stdio.h>

int main()
{
    float CF, A = 365, AF, V;
   	
   	printf("quantos cigarros voce fuma por dia ?");
    scanf("%f" , &CF);
 	printf("quantos anos vc ja fumou ?");
    scanf("%f" , &AF);

    V = (CF * 10) * ((AF * A) / 1440);
 
    printf("Voce perdeu %.f dias de vida " , V);
    return 0;
}



