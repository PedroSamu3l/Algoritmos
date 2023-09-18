 #include <stdio.h>

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
