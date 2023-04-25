#include <stdio.h>

int main(){
	
	float x;
	
	printf("digite um numero real: ");
	scanf("%f",&x);
	
	int parte_inteira = (int) x;
	printf("a parte inteira do numero %.2f eh %d", x,parte_inteira);
}
