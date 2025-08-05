#include <stdio.h> 
#include <locale.h>

int main(){
     setlocale(LC_ALL, "Portuguese");
     int i, s = 0;
     for(i = 1; i <= 500; i ++){
     	if(i%2 == 0){
     		s += i;
		 }
	 }
     printf("O somatório dos valores pares de 1 aé 500 é: %d\n", s);
	 return(0);
}