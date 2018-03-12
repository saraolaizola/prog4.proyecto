#include "producto.h"
#include "camarero.h"
#include "utilidades.h"
#include <stdio.h>

int main (void)
{
	int n, opcion;

	printf("Bienvenido al Restaurante\n");

	do 
	{
		printf("\n 1. Administrador");
		printf("\n 2. Camarero");
		printf("\n 3. Salir");

		printf("\n\n Introduzca opci%cn (1-3): ",162);
		scanf ("%d",&opcion);

		switch (opcion)
		{
			case 1:
				do
				{
					printf("\n 1. Consultar estad%csticas",161);
					printf("\n 2. A%cadir camarero", 164);
					printf("\n 3. A%cadir producto", 164); 
					printf("\n 4. Editar producto");
					printf("\n 5. Eliminar producto");
					printf("\n 6. Salir");
					
					printf("\n\n Introduzca opci%cn (1-6): ",162);
					scanf("%d",&n);

					switch (n)
					{
						case 1:
						//Consultar Estadisticas
						break;

						case 2:
						AltaCamarero();
						break;

						case 3:
						AltaProducto();
						break;

						case 4:
						//Editar producto
						break;

						case 5:
						//Eliminar producto
						break;
					}
				} while (n!=6);
			break;

			case 2:
				do
				{
					printf("\n 1. Nueva mesa");
					printf("\n 2. A%cadir a mesa", 164); 	
					printf("\n 3. Imprimir cuenta");
					printf("\n 4. Salir");

					printf("\n\n Introduzca opci%cn (1-4): ",162);
					scanf("%d",&n);

					switch (n)
					{
						case 1:
						//Anyadir una nueva mesa
						break;

						case 2:
						//Anyadir productos a una mesa ya anyadida
						break;

						case 3:
						//Sacar la cuenta de una mesa determinada
						break;
					}
				} while (n!=4);
			break;
		}
	} while (opcion!=3);

	return 0;
}