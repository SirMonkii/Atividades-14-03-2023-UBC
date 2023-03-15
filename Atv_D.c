#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int x;
	
	printf("Insira o valor de X: ");
	scanf("%d", &x);
	
	if(x % 3 == 0, x % 7 == 0){
		
		printf("%d é divisível por 3 e 7");
		
	}
	
	return 0;
}
