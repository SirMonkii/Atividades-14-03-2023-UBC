#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int n;
	
	printf("Insira um número: ");
	scanf("%d", &n);
	
	if(n >= 20){
		
		printf("\nMaior do que 20");
		
	}
	
	return 0;
}
