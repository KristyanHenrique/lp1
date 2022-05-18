#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	float m1=(8+9+7)/3;//media 1
	float m2=(4+5+6)/3;//media 2
	float sm=m1+m2;//soma das medias
	float mm=sm/2;//media das medias
	printf("A média 1 é = %0.2f \n", m1,"\n");
	printf("A média 2 é = %0.2f \n", m2,"\n");
	printf("A soma das médias é = %0.2f \n", sm,"\n");
	printf("A média das médias é = %0.2f \n", mm,"\n");

	return 0;
}