#include <stdio.h>
#include <stdlib.h>

int area(int base, int altura);//Prototipo da função

char display(); //prototipo da função...

int main(){

	int a, b, c; // variaveis locais
	
	display();	

	printf("\nDigite o valor da Base: ");
	scanf("%d",&a);
	getchar();
	
	printf("\nDigite o valor da Haltura ");
	scanf("%d",&b);
	getchar();
	
	c = area(a, b);
	
	printf("\nO valor da area eh: %d", c);
	
	
}

//Desenvolvimento da função

int area(int base, int altura){
    
   return (base * altura/2); //Retornando os valores...
       
}

//Desenvolvimento da função de texto da tela...

char display(){
       printf("========================\n");
printf("Calculo da Area do Triangulo\n");
printf("========================\n");
    
}
