#include <stdio.h> 
#include <locale.h>

int main(){
     setlocale(LC_ALL, "Portuguese");
     int n, i, f = 1;
     printf("Digite um valor para n: \n");
     scanf("%d", &n);
     if( n >= 0){
     	for(i = n; i >= 1; i--){
     		f = f * i;
	 	}
	 	printf("%d! = %d \n", n, f);
	 }
	 else{
	 	printf("Não existe fatorial de um número negativo.");
	 }
	 return(0);
}