#include<stdio.h>

int main() {
	int area;
	int lado;
	int perimetro;
	
	printf("Ingrese el lado del cuadrado\n");
	scanf("%i", &lado);
	/* Etapa 3 - Proceso(operacion)  */
	area = lado*lado;
	perimetro = 4*lado;
	/* Etapa 4 - Mostrar el resultado  */
	printf("El area del cuadrado es:%icm2\n", area);
    printf("El perimetro del cuadrado es:%icm2\n", perimetro);

	return 0;
}