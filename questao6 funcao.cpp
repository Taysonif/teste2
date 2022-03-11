#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float idealmasculino( float alt);
float idealfeminino( float alt);

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float altura, peso_ideal;
	int sexo;
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	printf("1 - masculino\n2 - feminino");
	printf("\nEscolha o seu sexo: ");
	scanf("%d", &sexo);
	
	if( sexo == 1){
		peso_ideal = idealmasculino(altura);
		
		printf("O peso ideal é: %f kg.", peso_ideal);
	}else if( sexo == 2) {
		peso_ideal = idealfeminino(altura);
		
		printf("O peso ideal é: %f kg.", peso_ideal);
	}
	
	
}

float idealmasculino( float alt) {
	float resultado;
	
	resultado = 72.7 * alt - 58;
	
	return resultado;
}

float idealfeminino( float alt) {
	float resultado;
	
	resultado = 62.1 * alt - 44.7;
	
	return resultado;
}
