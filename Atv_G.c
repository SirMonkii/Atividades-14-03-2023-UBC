#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int x;
	
	printf("Digite o valor de X: ");
	scanf("%d", &x);
	
	if(x % 3 ==0){
		
		printf("M�ltiplo de 3");
		
	}
	else{
		
		printf("N�o � m�ltiplo de 3");
		
	}
	
	return 0;
}
