#include <stdio.h> 
#include <locale.h>

int main(){
     setlocale(LC_ALL, "Portuguese");
     int cont;
     printf("Contagem dos 500 primeiros números inteiros positivos em ordem crescente: \n");
     for(cont = 500; cont >= 1; cont--){
	 	printf("%d ", cont);
     }
	 return(0);
}