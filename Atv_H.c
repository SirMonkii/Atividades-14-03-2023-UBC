#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2, n3, n4, m;
	
	printf("Insira a primeira nota: ");
	scanf("%d", &n1);
	
	printf("Insira a segunda nota: ");
	scanf("%d", &n2);
	
	printf("Insira a terceira nota: ");
	scanf("%d", &n3);
	
	printf("Insira a quarta nota: ");
	scanf("%d", &n4);
	
	m = (n1 + n2 + n3 + n4)/4;
	
	if(m >= 5){
		
		printf("Aprovado");
		
	}
	else{
		
		printf("Reprovado");
		
	}
	
	return 0;
}
