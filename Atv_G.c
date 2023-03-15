#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int x;
	
	printf("Digite o valor de X: ");
	scanf("%d", &x);
	
	if(x % 3 ==0){
		
		printf("Múltiplo de 3");
		
	}
	else{
		
		printf("Não é múltiplo de 3");
		
	}
	
	return 0;
}
