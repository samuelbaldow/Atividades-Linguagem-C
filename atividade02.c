#include <stdio.h>

int main(){
	
	float area, raio;
	float pi = 3.14;
	
	printf("digite o raio do circulo: ");
	scanf("%f",&raio);
	
	area = pi * raio * 2;
	printf("o resultado da area do circulo eh: %.2f",area);
	
}
