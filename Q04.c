#include <stdio.h> 
#include <locale.h>

int main(){
     setlocale(LC_ALL, "Portuguese");
     int n, sn = 0;
     printf("Números divisíveis por 2 entre 10 e 50: \n");
     for(n = 10; n<=50; n++){
     	if(n % 2 == 0){
     		sn++;
		 }
	 }
	 printf("Foram exibidos %d números divisíveis por 2.", sn);
	 return(0);
}