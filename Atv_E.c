#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int P1, P2, M;
	
	printf("Insira a primeira nota: ");
	scanf("%d", &P1);
	
	printf("Insira a segunda nota: ");
	scanf("%d", &P2);
	
	M = (P1 + P2)/2;
	
	if(M >= 5){
		
		printf("Aprovado");
		
	}
	
	return 0;
}
