#include <stdio.h> 
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    int n, i, f;
    printf("Fatorial dos números ímpares entre 1 e 11: \n");
	for(n = 1; n <= 11; n++){
     	if( n % 2 != 0){
     		f = 1;
     		for(i = 1; i <= n; i++){
     			f = f * i;
     		}
     		printf("%d! = %d \n", n, f);
		}
	}
	 return(0);
}