#include <stdio.h>

int main(){
	
	int idade;
	
	printf("digite a idade de uma pessoa: ");
	scanf("%d",&idade);
	
	if(idade >= 18){
		printf("a pessoa eh maior de idade");
		
	}
	else{
		printf("a pessoa eh menor de idade");
	}
}
