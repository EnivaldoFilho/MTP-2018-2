/* P1.c*/
/*Enivaldo Batista dos Santos*/
/*11721EEL013*/


#include <stdio.h>

int main ()
{
	char bits[256];
	int estado=0;
	int i=0;
	printf("Digite a sequencia: ");
	fflush(stdin);
	gets(bits);
	while(bits[i] != '\0')
	{
		if(estado == 0 && bits[i]== '0')
		{
		    estado=0;}
		else if(estado == 0 && bits[i] != '0')
		    {
			estado=1;}
		else if(estado == 1 && bits[i] == '0') 
			{
			estado=2;}
		else if(estado == 1 && bits[i] != '0')
			{
			estado=0;}
		else if(estado == 2 && bits[i] == '0')
			{
			estado=1;}
		else
			{
		 	estado = 2; 
			 }
		i++;
	    }
	printf("\nA sequencia digitada: %s ", bits);
	if(estado==0)
	    printf("\n Sequencia multipla de 3. ");
	else
	    printf("\n Nao multiplo de 3."); 
	return 0;
	
}
