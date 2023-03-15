#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int a, b;
	
	printf("Insira um valor para A: ");
	scanf("%d", &a);
	
	printf("Insira um valor para B: ");
	scanf("%d", &b);
	
	if(a > b){
		
		printf("%d %d", b, a);
		
	}
	else{
		
		printf("%d %d", a, b);
		
	}
	
	
	
	return 0;
}
