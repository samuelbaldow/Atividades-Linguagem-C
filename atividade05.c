#include <stdio.h>

int main(){
	
	int x,ant,suc;
	
	printf("Insira um valor \n");
	scanf("%d",&x);
	
	ant = x - 1;
	suc = x + 1;
	
	printf("O antecessor eh: %d \n O sucessor eh: %d",ant,suc);
}
