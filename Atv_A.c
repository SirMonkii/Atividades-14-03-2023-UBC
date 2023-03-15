#include <stdio.h> 
#include <locale.h> 

  

int main(){ 
setlocale(LC_ALL, "portuguese"); 

int sexo; 

	printf("Insira o sexo:"); 

	scanf("%c", &sexo); 

if(sexo == 'F'){ 

	printf("\nFeminino"); 

} 
else if(sexo == 'M'){
	
	printf("\nHomem");
}

return 0; 

} 
