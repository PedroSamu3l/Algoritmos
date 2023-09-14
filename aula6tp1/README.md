Exercicios da aula 6 de C (tp1)
 
1) #include <stdio.h>
int main()
{
    char n [100];

    printf("qual seu nome?");
    scanf("%s" , n);

    printf("oi %s " , n);
    return 0;
}
_________________________________________________________________________
2) #include <stdio.h>

int main()
{
   	 char n [100];
    	int i;
   	 printf("qual seu nome?");
    	scanf("%s" , n);
   	 printf("qual sua idade?");
 	   scanf("%d" , &i);
    
    printf("oi %s ! Voce tem %d anos " , n, i);
    return 0;
}
_________________________________________________________________________
3) #include <stdio.h>

int main()
{
   		 float K, D;
 	  	 float V = 90;
   	 float TD = 0.20;
   	 float calc;
   	 
 	  	 printf("quantidade de Km percorridos ?");
 	   	scanf("%f" , &K);
   	 printf("quantidade de dias?");
 	   scanf("%f" , &D);

    calc = D * V + K * TD;
    
    printf("O total a ser pago sera de %.2f" , calc);
    return 0;
}
_________________________________________________________________________
4)#include <stdio.h>
int main()
{
   	 float P, PF;
     
   	 printf("qual o valor do produto ?");
    	scanf("%f" , &P);
    PF = P - (P * 0.05);
    printf("O total a ser pago sera de %.2f" , PF);
    return 0;
}
_________________________________________________________________________
5) #include <stdio.h>

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
6) #include <stdio.h>

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
DESAFIO
 #include <stdio.h>

int main()
{
    float CF, A = 365, AF;
   	float  DV, calc, V;
   	
   	 
   	
   	printf("quantos cigarros fumados por dia ?");
    scanf("%f" , &CF);
 	printf("quantos anos vc ja fumou ?");
    scanf("%f" , &AF);
 
 calc = (CF * A);
 DV = (calc * AF);
 V = ((CF * AF / 1440) * 10) * DV;
 
 
    
    printf("O total de dias de vida ele perdera sao %.2f" , V);
    return 0;
}
