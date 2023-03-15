#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int a, b, soma;
	
	printf("Insira o valor de A: ");
	scanf("%d", &a);
	
	printf("Insira o valor de B: ");
	scanf("%d", &b);
	
	soma = a + b;
	
	if(soma > 10){
		
		printf("\n%d", soma);
		
	}
	
	return 0;
}
