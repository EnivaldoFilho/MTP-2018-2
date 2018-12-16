/*P3.C*/
/*Enivaldo Batista dos Santos*/
/*11721EEL013*/

#include<stdio.h>

int main ()
{
	 char p[200];
	 int c[200] ,i ,a = 0;
	 
	 printf("digite algo:\n");
	 scanf("%s", p);
	 getchar();
	 
	 for(i = 0 ; p[i] != '\0' ; i++)
	 {
	 	c[i] = p[i];
	 	 if(c[i] >= 48 && c[i] <= 57 ){
	 	     
	 	     c[i] = c[i] - 48;
	 	     printf("%d", c[i]); }
	 	 else
		      a++;     
		
     }
     if( a == i)
	     printf("0");   
	return 0;
}
