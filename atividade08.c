#include <stdio.h>

int main(){
	
	float x,faren,r;
	
	printf("Insira um valor: \n");
	scanf("%f",&x);
	
	faren = x * 1.8;
	r = faren + 32;
	
	printf("%.2f grau celsius sao %.2f farenheit",x,r);
}
