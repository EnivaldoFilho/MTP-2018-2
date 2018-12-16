/*P4.C*/
/*Enivaldo Batista dos Santos*/
/*11721EEL013*/


#include <stdio.h>

int ackermann(int m, int n)
{
	if(m==0) 
        return n + 1;
	else if(m > 0 && n==0) 
        return ackermann(m-1, 1);
	else if(m > 0 && n > 0)  
        return ackermann(m - 1,ackermann(m, n - 1));
  	return 0;
}

int main()
{
	int i, j;
		printf("Coloque o seu 'm' desejado: ");
		scanf("%d",&i);
		printf("Coloque o seu 'n' desejado: ");
		scanf("%d",&j);
		printf("Ackermann Function: \nA(%d, %d) = %d\n", i, j, ackermann(i,j));
    return 0;
}
