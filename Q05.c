#include <stdio.h> 
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int q;
    float n1, n2, n3, m;
	for(q = 1; q <= 10; q++){
	 	printf("ALUNO %d: \n", q);
	 	printf("Digite a sua nota 1: \n");
	 	scanf("%f", &n1);
	 	printf("Digite a sua nota 2: \n");
	 	scanf("%f", &n2);
	 	printf("Digite a sua nota 3: \n");
	 	scanf("%f", &n3);
	 	m = (n1 + n2 + n3) / 3;
	 	if(m >= 9){
	 		printf("Sua média aritmética foi: %.1f. \n", m );
	 		printf("O conceito obtido foi A. \n");
		 }
		 else{
		 	if(m >= 7 && m < 9){
		 		printf("Sua média aritmética foi: %.1f. \n", m );
	 			printf("O conceito obtido foi B. \n");
			 }
			 else{
			 	if(m >= 6 && m < 7){
			 		printf("Sua média aritmética foi: %.1f. \n", m );
	 				printf("O conceito obtido foi C. \n");
				 }
				 else{
				 	if(m >= 4 && m < 6){
				 		printf("Sua média aritmética foi: %.1f. \n", m );
	 					printf("O conceito obtido foi D. \n");
					 }
					 else{
					 	printf("Sua média aritmética foi: %.1f. \n", m );
	 					printf("O conceito obtido foi E. \n");
					 }
				 }
			 }
		 }
	 } 
	 return(0);
}