#include <stdio.h> 
#include <locale.h>

int main(){
     setlocale(LC_ALL, "Portuguese");
     int i, v;
     for(v = 1; v <=10; v++){
     	printf("Qual a idade %d: ", v);
     	scanf("%d", &i);
     	if(i < 18){
     		printf("Você é menor de idade! \n");
     		printf("\n");
		 }
		 else{
		 	printf("Você é maior de idade! \n");
		 	printf("\n");
		 }
	 }
	 return(0);
}