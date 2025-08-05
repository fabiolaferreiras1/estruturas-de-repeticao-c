#include <stdio.h> 
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x, y, c, i, j;
    do{
    	printf("Digite um valor para x: \n");
    	scanf("%d", &x);
	}while(x < 0);
	do{
		printf("Digite um valor para y: \n");
    	scanf("%d", &y);	
	}while(y < 0 && y < x);
	printf("Números primos entre %d e %d: \n", x, y);
	for(i = x; i <= y; i++){
		c = 0;
		for(j = 1; j <= i; j++){
			if(i % j == 0){
				c = c + 1;
			}
		}
		if(c == 2){
			printf("%d \n", i);
		}
	}
	return(0);
}