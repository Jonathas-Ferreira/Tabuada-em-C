#include <stdio.h>
#include <math.h>

int main(){

	
	int i=0, numero=0;
	int resposta=0;
	
	
{
	printf ("Tabuada\n");
	printf("Digite o numero da tabuada:\n");
	scanf("%d", &numero);
	for (i=1; i<=10; i++)
{

      printf("%d x %d = %.d\n", i, numero, numero*i);
}

    return 0;
}
}