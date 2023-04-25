#include <stdio.h>

int main(){
	
	int x,i;
	
	printf("Insira um valor: \n");
	scanf("%d",&x);
	
	for(i=0;i<=10;i++){
		
		printf("%dx%d=%d \n",x,i,x*i);
	}
}
