#include <stdio.h>

int main(){
	
	int x;
	
	printf("Insira um valor: \n");
	scanf("%d",&x);
	
	if(x%2 == 0){
		printf("par \n");
	}
	else{
		printf("impar \n");
	}
}
