#include <stdio.h>

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


