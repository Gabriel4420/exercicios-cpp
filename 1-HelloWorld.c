#include <stdio.h>
#include <stdlib.h>

//Fun��o principal do programa
double soma(double a, double b){
	double resultado;
	
	
	resultado = a+b;
	
	printf("O resultado da soma eh :%2.f",resultado);
	
	return resultado;
	
}



void main(){
	double a,b;
    //Imprime na tela
    printf("Oi mundo!");
    
    soma(10,20);

    //Pausa o programa ap�s executar
    system("pause");

}

