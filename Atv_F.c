#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int idade;
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
	
	if(idade >= 18){
		
		printf("Maior de idade");
		
	}
	else{
		
		printf("Menor de idade");
		
	}
	
	return 0;
}
