#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float sal, nsal;
	
	printf("Insira o sal�rio: ");
	scanf("%f", &sal);
	
	if(sal <= 300){
		
		nsal = sal*35/100 + sal;
		
		printf("Novo sal�rio: %.2f", nsal);
		
	}
	else{
		
		nsal = sal*15/100 + sal;
	
		printf("Novo sal�rio: %.2f", nsal);
		
	}
	
	return 0;
}
